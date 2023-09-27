#include "Rectangle.h"
#include <iostream>
using namespace std;
Rectangle::Rectangle(int len,int width,int t):Shape(t)
{
	this->length=len;
	this->width=width;
}

void Rectangle::Display(){
	cout<<"Length of Rectangle is: "<<this->length<<endl;
	cout<<"Width of Rectangle is: "<<this->width<<endl;
	cout<<"ThickNess Of Rectangle is: "<<this->thickness<<endl;
}

Rectangle::~Rectangle()
{
}
