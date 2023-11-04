#include<iostream>
using namespace std;

class base{
	private:
		int priv_var;
	protected:
		int prot_var;
	public:
		base(){
			priv_var = 10;
			prot_var = 11;
		}
	friend void friend_func(base& obj);
};

void friend_func(base& obj){
	cout<<"Private var "<<obj.priv_var<<endl;
	cout<<"Protected var "<<obj.prot_var;
}

int main(){
	base obj1;
	friend_func(obj1);
	return 0;
}
