#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	int x=123;
	double y=34.5678;
	cout<<"1234567890"<<endl;
	cout<<setw(8)<<x<<endl;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<y<<endl;
	cout<<setiosflags(ios::showpos)<<x<<endl;
	return 0;
}
