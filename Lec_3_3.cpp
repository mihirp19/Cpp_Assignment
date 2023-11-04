#include<iostream>
using namespace std;

class human{
	public:
		void run(){
			cout<<"We can run"<<endl;
		}
};

class boy:public human{
	public:
		void run(){
			cout<<"Boy can run";
		}
};

int main(){
	boy obj;
	obj.run();
}
