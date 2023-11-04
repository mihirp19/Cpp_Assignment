//hybrid inheritance
#include<iostream>
using namespace std;

class a{
	public:
		void display(){
			cout<<"This is A"<<endl;
		}
};

class b:public a{
	public:
		void display2(){
			cout<<"This is B"<<endl;
		}
};

class c{
	public:
		void display3(){
			cout<<"This is C"<<endl;
		}
};

class d: public b, public c{
	public:
		void display4(){
			cout<<"This is D"<<endl;
		}
};

int main(){
	d obj;
	obj.display();
	obj.display2();
	obj.display3();
	obj.display4();
}
