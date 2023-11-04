#include<iostream>
using namespace std;

class Object{
	public:
		string a,b;
		
	Object(string c, string d){
		a=c;
		b=d;
	}
	
	Object operator+(Object obj){
		Object result("","");
		result.a = a + obj.a;
		result.b = b + obj.b;
		return result;
	}
	
	void display(){
		cout<<"Final string: "<<a<<"& "<<b<<endl;
	}
};

int main(){
	Object obj1("Hello ","How ");
	Object obj2("Mihir ","are you doing?");
	Object obj3("","");
	obj3 = obj1 + obj2;
	obj3.display();
	return 0;
}
