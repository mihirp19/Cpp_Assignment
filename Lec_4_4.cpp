//hierarchical inheritance
#include<iostream>
using namespace std;

class a{
	public:
		void sum(){
			cout<<"A class"<<endl;
		}
};

class b:public a{
	public:
		void run(){
			cout<<"B class"<<endl;
		}
};

class c:public a{
	public:
		void xyz(){
			cout<<"C class";
		}
};
int main(){
	c obj;
	b obj2;
	obj.sum();
	obj.xyz();
	obj2.run();
	obj2.sum();
}
