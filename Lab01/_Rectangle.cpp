#include "_Rectangle.h"

//�޲ι��캯��
_Rectangle::_Rectangle() {
	//Ĭ�����Ͻ�����Ϊ(0��0)
	left_top.set_X(0);
	left_top.set_Y(0);
	//���Ͻ�����Ϊ(20��10)
	right_bottom.set_X(20);
	right_bottom.set_Y(10);
	isfilled = false;

	//������
	setcolor(border_color.get_color());
	rectangle(left_top.get_X(), left_top.get_Y(), right_bottom.get_X(), right_bottom.get_Y());
}
_Rectangle::_Rectangle(Point left_t, Point right_b, Color fill_colr, Color border_colr) {
	left_top = left_t;
	right_bottom = right_b;

	isfilled = true;

	fill_color = fill_colr;
	border_color = border_colr;

	//�������Ͻǣ����½����껭���Σ������ñ߽�������ɫ
	setcolor(border_color.get_color());
	rectangle(left_top.get_X(), left_top.get_Y(), right_bottom.get_X(), right_bottom.get_Y());

	setfillcolor(fill_color.get_color());
	floodfill(left_top.get_X() + 1, left_top.get_Y() + 1, border_color.get_color());
}

//setter
//�������Ͻǵ�����
void _Rectangle::set_left_top(Point left_t) {
	left_top = left_t;
}
//�������½ǵ�����
void _Rectangle::set_right_bottom(Point right_b) {
	right_bottom = right_b;
}
//���������ɫ
void _Rectangle::set_fill_color(Color fill_colr) {
	fill_color = fill_colr;
}
//���ñ߽���ɫ
void _Rectangle::set_border_color(Color border_colr) {
	border_color = border_colr;
}
//�������״̬
void _Rectangle::set_isfilled(bool is) {
	isfilled = is;
}

//getter
//��ȡ���Ͻǵ�����
Point _Rectangle::get_left_top() {
	return left_top;
}
//��ȡ���½ǵ�����
Point _Rectangle::get_right_bottom() {
	return right_bottom;
}
//��ȡ�����ɫ
Color _Rectangle::get_fill_color() {
	return fill_color;
}
//��ȡ�߽���ɫ
Color _Rectangle::get_border_color() {
	return border_color;
}
//��ȡ���״̬
bool _Rectangle::get_isfilled() {
	return isfilled;
}