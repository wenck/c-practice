#include<iostream>
#include "Circle.h"

Circle::Circle() {
	radius = 1.0;
}

inline Circle::Circle(double radius_) {
	radius = radius_;
}

inline double Circle::getArea() {
	return (3.14 * radius * radius);
}

int main() {

	Circle c1;
	Circle c2{ 2.0 };

	std::cout << c1.getArea() << std::endl;
	std::cout << c2.getArea() << std::endl;
	return 0;

}