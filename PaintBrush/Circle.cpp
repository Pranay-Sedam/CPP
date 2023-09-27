#include "Circle.h"

Circle::Circle(int radius,Point startPoint, endPoint;int t)
{
	this->radius=radius;
	this->startPoint=startPoint;
	this->endPoint=endPoint;
}

void Circle::Display(){
	cout<<"Radius of Circle is: "<<this->radius<<endl;
	cout<<"StartPoint of Circle is: "<<this->startPoint<<endl;
	cout<<"EndPoint of Circle is: "<<this->endPoint<<endl;
}

Circle::~Circle()
{
}
