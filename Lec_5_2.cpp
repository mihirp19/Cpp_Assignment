#include<iostream>
using namespace std;

class MyInterface{
	public:
		virtual void Display()=0;
};

class one:public MyInterface{
	public:
	void Display(){
		cout<<"Class 1"<<endl;
	}
};

class two:public MyInterface{
	public:
		void Display(){
			cout<<"Class 2"<<endl;
		}
};

int main(){
	one obj;
	two obj2;
	
	obj.Display();
	obj2.Display();
}
