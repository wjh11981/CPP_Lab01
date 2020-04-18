#include "Triangle.h"

//无参构造函数
Triangle::Triangle() {
	p1.set_X(0);
	p1.set_Y(0);

	p2.set_X(100);
	p2.set_Y(100);

	p3.set_X(100);
	p3.set_Y(0);
	isfilled = false;

	//三个顶点顶点x,y坐标的数组，用于画三角形
	int p[lines * 4] = { p1.get_X(),p1.get_Y(),p2.get_X(),p2.get_Y(),p3.get_X(),p3.get_Y() };
	//画出三角形
	setcolor(border_color.get_color());
	drawlines(lines, p);
}
Triangle::Triangle(Point P1, Point P2, Point P3, Color fill_colr, Color border_colr) {
	p1 = P1;
	p2 = P2;
	p3 = P3;
	isfilled = true;
	int p[lines * 4] = { p1.get_X(),p1.get_Y(),p2.get_X(),p2.get_Y(),p2.get_X(),p2.get_Y(),p3.get_X(),p3.get_Y(),p3.get_X(),p3.get_Y(),p1.get_X(),p1.get_Y() };

	fill_color = fill_colr;
	border_color = border_colr;

	//根据三点坐标画三角形，并设置边界和填充颜色
	setcolor(border_color.get_color());
	drawlines(lines, p);

	setfillcolor(fill_color.get_color());
	//因为重心一定在圆内部,以重心O作为三角形内部的点进行填充，向量OA,OB,OC之和为0
	floodfill((p1.get_X() + p2.get_X() + p3.get_X()) / 3, (p1.get_Y() + p2.get_Y() + p3.get_Y()) / 3, border_color.get_color());
}

//setter
void Triangle::set_p1(Point P1) {
	p1 = P1;
}
void Triangle::set_p2(Point P2) {
	p2 = P2;
}
void Triangle::set_p3(Point P3) {
	p3 = P3;
}
void Triangle::set_fill_color(Color fill_colr) {
	fill_color = fill_colr;
}
void Triangle::set_border_color(Color border_colr) {
	border_color = border_colr;
}
void Triangle::set_isfilled(bool is) {
	isfilled = is;
}

//getter
Point Triangle::get_p1(Point P1) {
	return p1;
}
Point Triangle::get_p2(Point P2) {
	return p2;
}
Point Triangle::get_p3(Point P3) {
	return p3;
}

Color Triangle::get_fill_color() {
	return fill_color;
}
Color Triangle::get_border_color() {
	return border_color;
}
bool Triangle::get_isfilled() {
	return isfilled;
}