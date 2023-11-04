//virtual functions
/*
	syntax:
		virtual void func_name(){}
*/
#include<iostream>
using namespace std;

class A{
	public:
		virtual void func(){
			cout<<"Virtual Function"<<endl;
		}
};

class B:public A{
	public:
		void func(){
			cout<<"Normal function";
		}
};

int main(){
	B obj;
	obj.func();
	obj.func();
}
