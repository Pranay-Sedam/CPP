#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include "Point.h"

class Circle : public Shape
{
	int radius,Point startPoint,Point endPoint;
	public:
		Circle(int radius,Point startPoint, Point endPoint,int t):Shape(t)
		~Circle();
		void Display();
	protected:
};

#endif
