#include <iostream>

using namespace std;
int main(){
	int a;
	cout<<"a?";
	cin>>a;
	switch(a%5){
		case 0: cout<<"remainder is 0"<<endl;
			break;
		case 1: cout<<"remainder is 1"<<endl;
			break;
		case 2: cout<<"remainder is 2"<<endl;
			break;
		case 3: cout<<"remainder is 3"<<endl;
			break;
		default: cout<<"remainder is 4"<<endl;
	}
	return 0;
}
