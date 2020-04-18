#include "color.h"

//默认构造函数

Color::Color() {
	R = 0;
	G = 0;
	B = 0;
	color = EGERGB(R, G, B);
}
//有参构造函数
Color::Color(int r, int g, int b) {
	R = r;
	G = g;
	B = b;
	color = EGERGB(R, G, B);
}
//setter
//设置color后更新R,G,B的值
void Color::set_color(color_t color) {
	this->color = color;
	R = EGEGET_R(color);
	G = EGEGET_G(color);
	B = EGEGET_B(color);
}
//设置R,G,B后同时也更新color的值
void Color::set_R(int r) {
	R = r;
	set_color(EGERGB(R, G, B));
}
void Color::set_G(int g) {
	R = g;
	set_color(EGERGB(R, G, B));
}
void Color::set_B(int b) {
	R = b;
	set_color(EGERGB(R, G, B));
}
//getter
color_t Color::get_color() {
	return color;
}
int Color::get_R() {
	return R;
}
int Color::get_G() {
	return G;
}
int Color::get_B() {
	return B;
}