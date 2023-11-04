#include<iostream>
using namespace std;

class Original{
	private:
		int a,b;
		void nums(){
			cout<<"Enter num1: "<<endl;
			cin>>a;
			cout<<"Enter num2: "<<endl;
			cin>>b;
		}
		void dispNum(){
			cout<<"Before Swap: "<<endl;
			cout<<"Num 1: "<<a<<endl;
			cout<<"Num 2: "<<b<<endl;
			swap(a,b);
		}
		void dispSwap(){
			cout<<"After swapping: "<<endl;
			cout<<"First Num: "<<a<<endl;
			cout<<"Second Num: "<<b<<endl;
		}
	public:
		friend void swapped(Original obj);
};
void swapped(Original obj){
	obj.nums();
	obj.dispNum();
	obj.dispSwap();
}

int main(){
	Original obj;
	swapped(obj);
	return 0;
}
