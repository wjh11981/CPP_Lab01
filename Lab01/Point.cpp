#include "Point.h"

//�޲ι��캯��
Point::Point() {
	x = 0;
	y = 0;
}
//�вι��캯��
Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}
//setter
void Point::set_X(int x) {
	this->x = x;
}
void Point::set_Y(int y) {
	this->y = y;
}
//getter
int Point::get_X() {
	return x;
}
int Point::get_Y() {
	return y;
}