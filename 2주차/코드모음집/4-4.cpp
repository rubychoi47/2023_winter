#include <iostream>

using namespace std;
int main(){
	int a;
	cout<<"a?";
	cin>>a;
	if(a>0)
		cout<<a<<"=positive number"<<endl;
	else if(a<0)
		cout<<a<<"= negative number"<<endl;
	else
		cout<<a<<"= zero"<<endl;
	return 0;
}
