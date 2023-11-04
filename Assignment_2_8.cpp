#include<iostream>
using namespace std;

class Calculator{
	public:
		void Result(int a, int b){
			cout<<"Sum is: "<<a+b<<endl;
			cout<<"Subtraction is: "<<a-b<<endl;
			cout<<"Multiplication is: "<<a*b<<endl;
			cout<<"Division is: "<<a/b<<endl;
		}
		
		void Result(double a, double b){
			cout<<"New Sum is: "<<a+b<<endl;
			cout<<"New Subtraction is: "<<a-b<<endl;
			cout<<"New Multiplication is: "<<a*b<<endl;
			cout<<"New Division is: "<<a/b<<endl;
		}
};

int main(){
	Calculator obj;
	obj.Result(10,5);
	obj.Result(10.2,5.2);
	return 0;
}
