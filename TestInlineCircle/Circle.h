
#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle {
	double radius;

public:                             //不加public默认private(只能在类中调用)
	Circle();
	Circle(double radius_);
	double getArea();
};

#endif