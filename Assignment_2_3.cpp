#include<iostream>
using namespace std;

inline int square(int a){
	return a*a;
}

inline int cube(int a){
	return a*a*a;
}

main(){
	int num;
	cout<<"Enter the value: "<<endl;
	cin>>num;
	cout<<"Square of the num is: "<<square(num)<<endl;
	cout<<"Cube of the num is: "<<cube(num);
}
