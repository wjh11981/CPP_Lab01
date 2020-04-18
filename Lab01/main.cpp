#include "Circle.h"
#include "Color.h"
#include "Environment_Controler.h"
#include "Point.h"
#include "_Rectangle.h"
#include "Triangle.h"
#include "ege_stream.h"
#include "Line.h"
#include <iostream>

using namespace std;

void draw() {

	//初始化窗口
	Environment_Controler E{ 1400,1000 };

	//在EGE中创建输入框
	rectangle(1000, 0, 1390, 1000);
	EgeStream::BasicEgeStream egeout(1010, 10);
	EgeStream::BasicEgeStream egein(1010, 10);
	egeout << "左侧画板尺寸:1000×1000  (请切换至英文输入法输入)"<< endl;

	//绘制图像
	while (1) {
		egeout << "请选择需要绘制的图形：" << endl;
		int flag;
		egeout << "1->圆    2->三角形    3->矩形    4->线" << endl;
		egein >> flag;

		switch (flag) {

			//画圆
		case 1: {

			egeout << "请分别输入圆心坐标和半径（输入共3位）" << endl;
			int x, y, r;
			egein >> x >> y >> r;
			Point center{ x,y };

			egeout << "请分别输入填充颜色和边界颜色的RGB值（输入共6位）" << endl;
			int r1, g1, b1, r2, g2, b2;
			egein >> r1 >> g1 >> b1 >> r2 >> g2 >> b2;
			Color fill_color{ r1,g1,b1 };
			Color border_color{ r2,g2,b2 };

			Circle{ center,r,fill_color,border_color };
			break;

		}
			  //画三角形
		case 2: {

			egeout << "请分别输入三角形的三个顶点坐标（输入共6位）" << endl;
			int x1, y1, x2, y2, x3, y3;
			egein >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
			Point p1{ x1,y1 }, p2{ x2,y2 }, p3{ x3,y3 };

			egeout << "请分别输入填充颜色和边界颜色的RGB值（输入共6位）" << endl;
			int r1, g1, b1, r2, g2, b2;
			egein >> r1 >> g1 >> b1 >> r2 >> g2 >> b2;
			Color fill_color{ r1,g1,b1 };
			Color border_color{ r2,g2,b2 };

			Triangle{ p1,p2,p3,fill_color,border_color };
			break;

		}
			  //画矩形
		case 3: {

			egeout << "请分别输入矩形左上角和右下角的坐标（输入共4位）" << endl;
			int x1, y1, x2, y2;
			egein >> x1 >> y1 >> x2 >> y2;
			Point left_top{ x1,y1 }, right_bottom{ x2,y2 };

			egeout << "请分别输入填充颜色和边界颜色的RGB值（输入共6位）" << endl;
			int r1, g1, b1, r2, g2, b2;
			egein >> r1 >> g1 >> b1 >> r2 >> g2 >> b2;
			Color fill_color{ r1,g1,b1 };
			Color border_color{ r2,g2,b2 };

			_Rectangle{ left_top,right_bottom ,fill_color,border_color };
			break;
			
		}
			  //画线段
		case 4: {

			egeout << "请分别输入线段两端点坐标（输入共4位）" << endl;
			int x1, y1, x2, y2;
			egein >> x1 >> y1 >> x2 >> y2;
			Point p1{ x1,y1 }, p2{ x2,y2 };

			egeout << "请输入线段颜色的RGB值（输入共3位）" << endl;
			int r, g, b;
			egein >> r >> g >> b;
			Color color{ r,g,b };

			Line{ p1,p2,color };
			break;

		}
		}
		//清屏
		egeout << "是否清屏" << endl;
		egeout << "1->yes    2->no" << endl;
		int flag1;
		egein >> flag1;
		if (flag1 == 1) {
			cleardevice();
			//重新生成初始输入框
			rectangle(1000, 0, 1390, 1000);
			EgeStream::BasicEgeStream egeout(1010, 10);
			EgeStream::BasicEgeStream egein(1010, 10);
			egeout << "左侧画板尺寸:1000×1000  (请切换至英文输入法)" << endl;
		}
	}
}


int main(){
	draw();
	system("pause");
	return 0;
}
