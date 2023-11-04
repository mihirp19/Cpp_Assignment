/*Inheritance*/
#include<iostream>
using namespace std;

class parent{
	public:
		void display(){
			cout<<"Parent class\n";
		}
};

class child:public parent{
	public:
		void display2(){
			cout<<"Child class";
		}
};

class child2:public child{
	
};

int main(){
	child obj;
	obj.display();
	obj.display2();
}
