#include "Rectangle.h"
int main() {
	Circle x1("Բ", 3);
	Rectangle y1("������", 3, 4);
	cout << "���ƣ�" << endl;
	y1.displayName();
	cout<< "�����" << y1.area() << endl;
	cout << "�ܳ���" << y1.perimeter() << endl;
	cout << "���ƣ�" << endl;
	 x1.displayName();
	cout << "�����" << x1.area() << endl;
	cout << "�ܳ���" << x1.circumference() << endl;

}