#include "Rectangle.h"
int main() {
	Circle x1("圆", 3);
	Rectangle y1("长方形", 3, 4);
	cout << "名称：" << endl;
	y1.displayName();
	cout<< "面积：" << y1.area() << endl;
	cout << "周长：" << y1.perimeter() << endl;
	cout << "名称：" << endl;
	 x1.displayName();
	cout << "面积：" << x1.area() << endl;
	cout << "周长：" << x1.circumference() << endl;

}