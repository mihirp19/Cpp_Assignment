//multiple inheritance
#include<iostream>
using namespace std;

class a{
	public:
		void display(){
			cout<<"A class";
		}
};

class b{
	public:
		void display2(){
			cout<<"B class";
		}
};

class c:public a,public b{
	
};

int main(){
	c obj;
	obj.display();
	obj.display2();
}
