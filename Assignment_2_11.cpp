#include<iostream>
using namespace std;

class Area{
	public:
		void Result(int a,int b){
			cout<<"Area of Rectangle: "<<a*b<<endl;
		}
		
		void Result(double a, double b){
			cout<<"Area of Triangle: "<<0.5*a*b<<endl;
		}
		
		void Result(double a){
			cout<<"Area of Circle: "<<3.14*a*a<<endl;
		}
};

int main(){
	Area obj;
	obj.Result(4,6);
	obj.Result(10.3,8.3);
	obj.Result(5);
	return 0;
}
