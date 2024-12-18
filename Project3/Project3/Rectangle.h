#pragma once
#include<iostream>
#include<string>
#define _USE_MATH_DEFINES
#include<cmath>
const double M_PI = 3.14159265358979323846;
using namespace std;
class Shape {
private :
	string name;
public:
	Shape(const string n) :name(n) {}
	void const displayName() {
		cout << "Í¼ÐÎ£º" << name << endl;
	};
};
class Rectangle :public Shape
{
private:
	double length;
	double width;
public:
	Rectangle(const string n, double l, double w) :Shape(n),length(l), width(w) {}
	double area() {
		return length * width;
	}
	double perimeter() {
		return (length + width) * 2;
	}
};
class Circle :public Shape {
private:
	double radius;
public:
	Circle ( const string n,double r):Shape(n),radius(r){}
	double  area() const{
		return M_PI * radius*radius;
	}
	double circumference() const {
		return 2 * M_PI*radius;
	}
};
