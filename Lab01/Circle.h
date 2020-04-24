#pragma once
#include "Color.h"
#include "Point.h"

class Circle {
private:
	//Բ�����꣬�뾶����ɫ,�Ƿ񽫱����
	Point center;
	int r;
	Color fill_color;
	Color border_color;
	bool isfilled;

public:
	Circle();
	Circle(Point Center, int R, Color fill_colr, Color border_colr);

	//setter
	void set_center(Point Center);
	void set_r(int R);
	void set_fill_color(Color fill_colr);
	void set_border_color(Color border_colr);
	void set_isfilled(bool is);

	//getter
	Point get_center();
	int get_r();
	Color get_fill_color();
	Color get_border_color();
	bool get_isfilled();
};