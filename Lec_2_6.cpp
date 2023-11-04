//paramterized constructors
#include<iostream>
using namespace std;

class add{
	public:
		add(int a, int b){
			cout<<"Sum of numbers: "<<endl<<a+b;
		}
};

int main(){
	int c,d;
	cout<<"Enter the 1st number: "<<endl;
	cin>>c;
	cout<<"Enter the 2nd number: "<<endl;
	cin>>d;
	add obj(c,d);
}
