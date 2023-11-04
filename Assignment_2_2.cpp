#include<iostream>
using namespace std;

class BankAccount{
	public:
		string name;
		int acc_no;
		string acc_type;
		double balance;
		
		display1(){
			cout<<"Name of the depositor: "<<name<<endl;
			cout<<"Account Number: "<<acc_no<<endl;
			cout<<"Type of account: "<<acc_type<<endl;
			cout<<"Balance in account: "<<balance<<endl;
		}
};

main(){
	BankAccount obj;
	obj.name = "Mihir Panchal";
	obj.acc_no = 7878786986;
	obj.acc_type = "Savings Account";
	obj.balance = 98765.69;
	obj.display1();
}
