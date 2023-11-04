//find the max from 3 numbers using friend function
#include<iostream>
using namespace std;

class Max{
	private:
		int a,b,c;
		void get_nums(){
			cout<<"Enter the first num: "<<endl;
			cin>>a;
			cout<<"Enter the second num: "<<endl;
			cin>>b;
			cout<<"Enter the third num: "<<endl;
			cin>>c;
		}

		void max_num(){
			if (a > b && a > c){
				cout << "The maximum number is: " << a << endl;
			}
			else if (b > a && b > c){
				cout << "The maximum number is: " << b << endl;
			}
			else{
				cout << "The maximum number is: " << c << endl;
			}
		}
	public:
		friend void max(Max obj);
};

void max(Max obj){
	obj.get_nums();
	obj.max_num();
}

int main(){
	Max obj;
	max (obj);
	return 0;
}
