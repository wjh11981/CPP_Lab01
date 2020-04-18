#include "Circle.h"

Circle::Circle() {
	r = 100;
	isfilled = false;
	center.set_X(300);
	center.set_Y(200);
	//画圆
	setcolor(border_color.get_color());
	circle(center.get_X(), center.get_Y(), r);

}

Circle::Circle(Point Center, int R, Color fill_colr, Color border_colr) {
	center.set_X(Center.get_X());
	center.set_Y(Center.get_Y());
	r = R;
	isfilled = true;

	fill_color = fill_colr;
	border_color = border_colr;

	//画圆，设置边界和填充颜色
	setcolor(border_color.get_color());
	circle(center.get_X(), center.get_Y(), r);

	setfillcolor(fill_color.get_color());
	//以圆心坐标作为内部点进行填充
	floodfill(center.get_X(), center.get_Y(), border_color.get_color());
}
//设置圆心坐标
void Circle::set_center(Point Center){
	center = Center;
}
//设置半径
void Circle::set_r(int R) {
	r = R;
}
//设置填充颜色
void Circle::set_fill_color(Color fill_colr) {
	fill_color = fill_colr;
}
//设置边界颜色
void Circle::set_border_color(Color border_colr) {
	border_color = border_colr;
}
//设置填充状态
void Circle::set_isfilled(bool is) {
	isfilled = is;
}
//获取圆心坐标
Point Circle::get_center() {
	return center;
}
//获取半径
int Circle::get_r() {
	return r;
}
//获取填充颜色
Color Circle::get_fill_color() {
	return fill_color;
}
//获取边界颜色
Color Circle::get_border_color() {
	return border_color;
}
//获取填充状态
bool Circle::get_isfilled() {
	return isfilled;
}