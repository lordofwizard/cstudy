#include<iostream>
using namespace std;
	static int no ;

struct baap{

	public:
	static void adder(){ ++no; }

	baap(){
		adder();
	}


};

int main(){
	baap lordofwizard;
	baap lkajslf;
	baap dj;
	baap hahaha;
	baap alkjfaj;
	baap ahsdfjkjka;
	cout << no << endl;
	
	cin.get();
	return 0;
}
