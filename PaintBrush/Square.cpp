#include "Square.h"
#include <iostream>
using namespace std;
Square::Square(int side,int t):Shape(t)
{
	this->side=side;
}

void Square::Display(){
	cout<<"Side Length of Square is: "<<this->side<<endl;
	cout<<"ThickNess Of Square is: "<<this->thickness<<endl;
}

Square::~Square()
{
}
