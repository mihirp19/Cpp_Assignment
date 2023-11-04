//example for inheritance
/*
5 types inheritance
	1. single level
	2. multi level
	3. multiple inheritance
	4. hybrid inheritance
	5. hierarchical inheritance
*/
//single inheritance
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

int main(){
	b obj;
	obj.run();
	obj.sum();
}
