#pragma once
#include "Color.h"
#include "Point.h"
//lines��Ϊ�����εı���=3
#define lines 3

class Triangle {
private:
	//��������������ɫ,�Ƿ񽫱����
	Point p1, p2, p3;
	Color fill_color;
	Color border_color;
	bool isfilled;

public:
	//�޲ι��캯��
	Triangle();
	Triangle(Point P1, Point P2, Point P3, Color fill_colr, Color border_colr);

	//setter
	void set_p1(Point P1);
	void set_p2(Point P2);
	void set_p3(Point P3);
	void set_fill_color(Color fill_colr);
	void set_border_color(Color border_colr);
	void set_isfilled(bool is);

	//getter
	Point get_p1(Point P1);
	Point get_p2(Point P2);
	Point get_p3(Point P3);

	Color get_fill_color();
	Color get_border_color();
	bool get_isfilled();
};