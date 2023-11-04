#include<iostream>
using namespace std;

class Cricketer{
	public:
		void TotalRuns(int a, int b, int c){
			cout<<"Total runs are: "<<a+b+c<<endl;
		}
		
		void AvgRuns(int a, int b, int c){
			cout<<"Average runs are: "<<(a+b+c)/3<<endl;
		}
		void BestScore(int a, int b, int c){
			if(a>b && a>c){
				cout<<"Best score: "<<a;
			}
			else if(b>a && b>c){
				cout<<"Best score: "<<b;
			}
			else{
				cout<<"Best score: "<<c;
			}
		}
};

class Batsman:public Cricketer{
	public:
		void M1(int a){
			cout<<"Match 1 score: "<<a<<endl;
		}
		void M2(int b){
			cout<<"Match 2 score: "<<b<<endl;
		}
		void M3(int c){
			cout<<"Match 3 score: "<<c<<endl;
		}
};

main(){
	Batsman obj;
	int a,b,c;
	
	cout<<"Enter the runs for Match 1: "<<endl;
	cin>>a;
	obj.M1(a);
	cout<<"Enter the runs for Match 2: "<<endl;
	cin>>b;
	obj.M2(b);
	cout<<"Enter the runs for Match 3: "<<endl;
	cin>>c;
	obj.M3(c);
	cout<<endl;
	
	obj.TotalRuns(a,b,c);
	obj.AvgRuns(a,b,c);
	obj.BestScore(a,b,c);
}
