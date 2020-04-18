#pragma once
#include <graphics.h>

class Environment_Controler {
private:
	int lenth, width;
public:
	//无参构造函数
	Environment_Controler();
	//有参构造函数
	Environment_Controler(int lenth, int width);
	~Environment_Controler();
	void set_lenth(int l);
	void set_width(int w);

	int get_lenth();
	int get_width();
};
