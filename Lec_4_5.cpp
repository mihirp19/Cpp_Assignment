//hybrid inheritance
#include<iostream>
using namespace std;

class a{
	public:
		void one(){
			cout<<"Class one"<<endl;
		}
};
class b:public a{
	public:
		void two(){
			cout<<"Class two"<<endl;
		}
};
class c{
	public:
		void three(){
			cout<<"Class three"<<endl;
		}
};

class d:public b, public c{
	public:
		void four(){
			cout<<"Class four";
		}
};

int main(){
	d obj;
	obj.one();
	obj.two();
	obj.three();
	obj.four();
}
