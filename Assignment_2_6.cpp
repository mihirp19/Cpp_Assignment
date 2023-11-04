#include<iostream>
using namespace std;

class Person{
	public:
		void display(string name, int age){
			cout<<"Name :"<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};

class Student:public Person{
	public:
		void display2(double prcnt){
			cout<<"Percentage :"<<prcnt<<endl;
		}
};

class Teacher:public Person{
	public:
		void display3(double salary){
			cout<<"Salary: "<<salary<<endl;
		}
};

main(){
	Student obj;
	Teacher obj2;
	
	cout<<"Student details: "<<endl;
	obj.display("Mihir Panchal",22);
	obj.display2(80.687);
	cout<<endl;
	cout<<"Teacher details: "<<endl;
	obj2.display("Darshan Gada",24);
	obj2.display3(50000.00);
}
