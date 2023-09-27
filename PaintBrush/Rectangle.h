#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape

{
	int length,width;
	public:
		Rectangle(int len,int width,int t);
		~Rectangle();
		 void Display();
	protected:
};

#endif
