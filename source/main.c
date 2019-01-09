//for memcpy
#include <string.h>

#include "tonc.h"

#include "snakeTiles.h"
#include "backgrounds.h"

//get obj buffer ready
OBJ_ATTR obj_buffer[128];

//false = h, true = v
bool axis = true;
int dir = -1;

INLINE OBJ_ATTR *obj_set_attr_mine(OBJ_ATTR *obj, u16 a0, u16 a1, u16 a2)
{
	obj->attr0= a0|ATTR0_8BPP; obj->attr1= a1; obj->attr2= a2;
	return obj;
}

struct node {
	int x;
	int y;
	OBJ_ATTR* obj;
};

struct node snakeUnits[100];
int snakelength = 2;

void positionUnit(struct node *n,int x, int y) {
	n->x = x;
	n->y = y;
	obj_set_pos(n->obj,x,y);
}
void addUnit() {
	if (snakelength < 100) {
		struct node* prev = &snakeUnits[snakelength-1];
		obj_set_attr(&obj_buffer[snakelength],ATTR0_SQUARE,ATTR1_SIZE_8x8,ATTR2_PALBANK(0));
		snakeUnits[snakelength].obj = &obj_buffer[snakelength];
		positionUnit(&snakeUnits[snakelength],prev->x,prev->y);
		snakelength++;
	}
}
void moveBody() {
	for (int i=snakelength-1;i>0;i--) {
		struct node* prev = &snakeUnits[i-1];
		positionUnit(&snakeUnits[i],prev->x,prev->y);
	}
}
void spawnApple() {
	int x = qran_range(0,30);
	int y = qran_range(0,20);
	obj_set_pos(&obj_buffer[127],x*8,y*8);
}
bool checkCollision() {
	for (int i=1;i<snakelength;i++) {
		if (snakeUnits[i].x == snakeUnits[0].x && snakeUnits[i].y == snakeUnits[0].y) {
			return true;
		}
	}
	return false;
}
void gameOver() {
	snakelength = 2;
	oam_init(obj_buffer,124);
	obj_set_attr(obj_buffer,ATTR0_SQUARE,ATTR1_SIZE_8x8,ATTR2_PALBANK(0) | 1);
	positionUnit(snakeUnits,SCREEN_WIDTH/2, SCREEN_HEIGHT/2);
	addUnit();
	spawnApple();
	axis = true;
	dir = -1;
}

int main() {

	memcpy(&tile_mem[4][0],snakeTilesTiles,snakeTilesTilesLen);
	memcpy(pal_obj_mem,snakeTilesPal,snakeTilesPalLen);

	oam_init(obj_buffer, 128);
	//first obj in sprite memory, my lil guy
	//snake head
	obj_set_attr(obj_buffer,ATTR0_SQUARE,ATTR1_SIZE_8x8,ATTR2_PALBANK(0) | 1);
	//apple
	obj_set_attr(&obj_buffer[127],ATTR0_SQUARE,ATTR1_SIZE_8x8,ATTR2_PALBANK(0) | 2);
	//obj_buffer[0] = ATTR0_BUILD(0,ATTR0_SQUARE,ATTR0_8BPP,0,0,,ATTR1_SIZE_8x8,;

	//REG_BG0CNT= BG_CBB(0) | BG_SBB(30) | BG_8BPP | BG_REG_32x64;

	REG_DISPCNT= DCNT_OBJ;

	struct node* head = snakeUnits;
	positionUnit(head,SCREEN_WIDTH/2, SCREEN_HEIGHT/2);
	addUnit();

	spawnApple();

	int pollTimer = 0;

	while (true) {
		vid_vsync();
		key_poll();
		if (pollTimer > 5) {
			pollTimer = 0;
		} else {
			pollTimer++;
			continue;
		}

		int h = key_tri_horz();
		int v = key_tri_vert();

		if ( (h) && axis ) {
			axis = false;
			dir = h;
		} else if ( (v) && !axis ) {
			axis = true;
			dir = v;
		}
		//obj_set_pos(&obj_buffer[1],head->x,head->y);
		positionUnit(&snakeUnits[1],head->x,head->y);
		moveBody();
		if (axis) {
			head->y += 8*dir;
		} else {
			head->x += 8*dir;
		}

		if (head->x<0) {
			head->x=0;
			gameOver();
		} else if (head->x > 8*29) {
			head->x = 8*29;
			gameOver();
		}

		if (head->y<0) {
			head->y=0;
			gameOver();
		} else if (head->y > 8*19) {
			head->y = 8*19;
			gameOver();
		}

		if (checkCollision()) {
			gameOver();
		}

		int appleX = BFN_GET(obj_buffer[127].attr1, ATTR1_X);
		int appleY = BFN_GET(obj_buffer[127].attr0, ATTR0_Y);

		if (head->x == appleX && head->y == appleY) {
			addUnit();
			spawnApple();
		}

		obj_set_pos(obj_buffer,head->x,head->y);
		oam_copy(oam_mem, obj_buffer, 128);
	}
}