//polymorphism
#include<iostream>
using namespace std;

class A{
	public:
		void run(int a, int b){
			cout<<"Addition of 2 numbers: "<<a+b<<endl;
		}
		void run(double a, double b){
			cout<<"Addition of 2 numbers double: "<<a+b<<endl;
		}
};

int main(){
	A obj;
	obj.run(22.5,2.3);
	obj.run(13,5);
}
