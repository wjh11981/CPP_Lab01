#pragma once
#include <graphics.h>

class Point {
private:
	int x, y;

public:
	//�޲ι��캯��
	Point();
	//�вι��캯��
	Point(int x, int y);

	//setter
	void set_X(int x);
	void set_Y(int y);

	//getter
	int get_X();
	int get_Y();
};