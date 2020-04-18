#pragma once
#include <graphics.h>

class Point {
private:
	int x, y;

public:
	//无参构造函数
	Point();
	//有参构造函数
	Point(int x, int y);

	//setter
	void set_X(int x);
	void set_Y(int y);

	//getter
	int get_X();
	int get_Y();
};