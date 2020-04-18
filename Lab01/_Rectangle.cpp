#include "_Rectangle.h"

//无参构造函数
_Rectangle::_Rectangle() {
	//默认左上角坐标为(0，0)
	left_top.set_X(0);
	left_top.set_Y(0);
	//右上角坐标为(20，10)
	right_bottom.set_X(20);
	right_bottom.set_Y(10);
	isfilled = false;

	//画矩形
	setcolor(border_color.get_color());
	rectangle(left_top.get_X(), left_top.get_Y(), right_bottom.get_X(), right_bottom.get_Y());
}
_Rectangle::_Rectangle(Point left_t, Point right_b, Color fill_colr, Color border_colr) {
	left_top = left_t;
	right_bottom = right_b;

	isfilled = true;

	fill_color = fill_colr;
	border_color = border_colr;

	//根据左上角，右下角坐标画矩形，并设置边界和填充颜色
	setcolor(border_color.get_color());
	rectangle(left_top.get_X(), left_top.get_Y(), right_bottom.get_X(), right_bottom.get_Y());

	setfillcolor(fill_color.get_color());
	floodfill(left_top.get_X() + 1, left_top.get_Y() + 1, border_color.get_color());
}

//setter
//设置左上角点坐标
void _Rectangle::set_left_top(Point left_t) {
	left_top = left_t;
}
//设置右下角点坐标
void _Rectangle::set_right_bottom(Point right_b) {
	right_bottom = right_b;
}
//设置填充颜色
void _Rectangle::set_fill_color(Color fill_colr) {
	fill_color = fill_colr;
}
//设置边界颜色
void _Rectangle::set_border_color(Color border_colr) {
	border_color = border_colr;
}
//设置填充状态
void _Rectangle::set_isfilled(bool is) {
	isfilled = is;
}

//getter
//获取左上角点坐标
Point _Rectangle::get_left_top() {
	return left_top;
}
//获取右下角点坐标
Point _Rectangle::get_right_bottom() {
	return right_bottom;
}
//获取填充颜色
Color _Rectangle::get_fill_color() {
	return fill_color;
}
//获取边界颜色
Color _Rectangle::get_border_color() {
	return border_color;
}
//获取填充状态
bool _Rectangle::get_isfilled() {
	return isfilled;
}