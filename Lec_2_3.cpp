//multiple inheritance
#include<iostream>
using namespace std;

class A{
	public:
	void sum(int a, int b){
		cout<<"this is sum: "<<a+b<<endl;
	}
};

class b:public A{
	public:
		void mult(int a, int b){
			cout<<"Multiplication of 2 nums: "<<a*b<<endl;
		}
};
class c:public A{
	public:
		void div(int a, int b){
			cout<<"Division: "<<a/b;
		}
};

class d:public A{
	public:
		void sub(int a, int b){
			cout<<"Subtraction: "<<a-b;
		}
};

int main(){
	b obj;
	obj.sum(2,2);
	obj.mult(8,8);
	cout<<"\n--------------\n";
	
	c obj2;
	obj2.div(3,3);
	obj2.sum(2,10);
	cout<<"\n---------------\n";
	
	d obj3;
	obj3.sub(5,2);
	obj3.sum(4,4);
	
	return 0;
}
