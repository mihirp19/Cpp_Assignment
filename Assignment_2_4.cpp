#include<iostream>
using namespace std;

class Add{
	public:
		Add(int a, int b){
			cout<<"Addition: "<<a+b<<endl;
		}
};

class Sub{
	public:
		Sub(int a, int b){
			cout<<"Subtraction: "<<a-b<<endl;
		}
};

class Multiply{
	public:
		Multiply(int a, int b){
			cout<<"Multiplication: "<<a*b<<endl;
		}
};

class Divide{
	public:
		Divide(double a, double b){
			cout<<"Division: "<<a/b<<endl;
		}
};

main(){
	double a, b;
	cout<<"Enter the values: "<<endl;
	cin>>a>>b;
	
	Add obj1(a,b);
	Sub obj2(a,b);
	Multiply obj3(a,b);
	Divide obj4(a,b);
}
