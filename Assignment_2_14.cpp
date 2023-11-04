//to swap two values using templates
#include<iostream>
using namespace std;

template <class T>
int swap_nums(T &x, T &y){
	T t;
	t=x;
	x=y;
	y=t;
	
	return 0;
}

int main(){
	int a,b;
	cout<<"Enter the first num: ";
	cin>>a;
	cout<<"Enter the second num: ";
	cin>>b;
	
	swap_nums(a,b);
	cout<<"After swapping numbers:"<<endl;
	cout<<"Num 1:"<<a<<" "<<endl<<"Num 2:"<<b<<endl;
	
	return 0;
}
