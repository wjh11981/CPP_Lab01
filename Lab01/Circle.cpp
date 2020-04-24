#include "Circle.h"

Circle::Circle() {
	r = 100;
	isfilled = false;
	center.set_X(300);
	center.set_Y(200);
	//��Բ
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

	//��Բ�����ñ߽�������ɫ
	setcolor(border_color.get_color());
	circle(center.get_X(), center.get_Y(), r);

	setfillcolor(fill_color.get_color());
	//��Բ��������Ϊ�ڲ���������
	floodfill(center.get_X(), center.get_Y(), border_color.get_color());
}
//����Բ������
void Circle::set_center(Point Center){
	center = Center;
}
//���ð뾶
void Circle::set_r(int R) {
	r = R;
}
//���������ɫ
void Circle::set_fill_color(Color fill_colr) {
	fill_color = fill_colr;
}
//���ñ߽���ɫ
void Circle::set_border_color(Color border_colr) {
	border_color = border_colr;
}
//�������״̬
void Circle::set_isfilled(bool is) {
	isfilled = is;
}
//��ȡԲ������
Point Circle::get_center() {
	return center;
}
//��ȡ�뾶
int Circle::get_r() {
	return r;
}
//��ȡ�����ɫ
Color Circle::get_fill_color() {
	return fill_color;
}
//��ȡ�߽���ɫ
Color Circle::get_border_color() {
	return border_color;
}
//��ȡ���״̬
bool Circle::get_isfilled() {
	return isfilled;
}