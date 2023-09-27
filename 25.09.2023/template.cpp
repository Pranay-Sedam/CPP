#include<iostream>
using namespace std;
template<class T> T add (T &a,T &b)
{
	T result = a+b;
	return result;
}
int main()
{
	int a=10;
	int b=20;
	float c=10.5;
	float d=20;
	cout<<"addition of int: "<<add(a,b)<<endl;
	cout<<"addition of float: "<<add(c,d);
}
