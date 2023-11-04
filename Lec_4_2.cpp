//multi-level inheritance
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

class c:public b{
	public:
		void xyz(){
			cout<<"C class";
		}
};
int main(){
	c obj;
	obj.run();
	obj.sum();
	obj.xyz();
}
