//multiple inheritance
#include<iostream>
using namespace std;

class a{
	public:
		void one(){
			cout<<"Class one"<<endl;
		}
};
class b{
	public:
		void two(){
			cout<<"Class two"<<endl;
		}
};
class c:public a, public b{
	public:
		void three(){
			cout<<"Class three";
		}
};

int main(){
	c obj;
	obj.one();
	obj.two();
	obj.three();
}
