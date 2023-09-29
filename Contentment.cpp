#include <iostream>
#include <string.h>
using namespace std;



class Date{
	
	int d,m,y;
	
	public:
		Date(int d,int m,int y){
			this->d=d;
			this->m=m;
			this->y=y;
		}
		
		void print(){
			cout<<d<<"/"<<m<<"/"<<y<<endl;
		}
	      
	
	
	
};

class Student{
	char name[30];
	int rollNo;
	int age;
	Date d1;
	public:
		Student(char* name,int r,int age,int day,int month,int year):d1(day,month,year){
               
			   strcpy(this->name,name);
			   this->rollNo=r;
			   this->age=age;			
		}
		
		void display(){
			cout<<"Name: "<<name<<"\n"<<"RollNo: "<<rollNo<<"\n"<<"Age: "<<age<<"\n"<<"DOB: ";
			d1.print();
		}
};

int main(){
	Student s1("kunal",22,21,22,02,2002);
	s1.display();
	Student s2("Pranay",20,25,11,05,1997);
	s2.display();
	return 0;
}
