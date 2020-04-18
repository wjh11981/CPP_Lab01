#pragma once
#include "Color.h"
#include "Point.h"

//由于Rectangle与库中名称矛盾，因此前面加上_
class _Rectangle {
private:
	//左上角坐标,右下角坐标,和颜色,是否将被填充
	Point left_top;
	Point right_bottom;

	Color fill_color;
	Color border_color;
	bool isfilled;

public:
	//无参构造函数
	_Rectangle();
	_Rectangle(Point left_t, Point right_b, Color fill_colr, Color border_colr);

	//setter
	void set_left_top(Point left_t);
	void set_right_bottom(Point right_b);

	void set_fill_color(Color fill_colr);
	void set_border_color(Color border_colr);
	void set_isfilled(bool is);

	//getter
	Point get_left_top();
	Point get_right_bottom();

	Color get_fill_color();
	Color get_border_color();
	bool get_isfilled();
};