#include "Environment_Controler.h"

//无参构造函数
Environment_Controler::Environment_Controler() {
	lenth = 600;
	width = 600;
	
	initgraph(600, 600, 0);
	setbkcolor(WHITE);
}
//有参构造函数
Environment_Controler::Environment_Controler(int lenth, int width) {
	this->lenth = lenth;
	this->width = width;
	initgraph(lenth, width, 0);
	setbkcolor(WHITE);
};
Environment_Controler::~Environment_Controler() {
	
	getch();
	closegraph();
}

void Environment_Controler::set_lenth(int l) {
	lenth = l;
}
void Environment_Controler::set_width(int w) {
	width = w;
}

int Environment_Controler::get_lenth() {
	return lenth;
}
int Environment_Controler::get_width() {
	return width;
}