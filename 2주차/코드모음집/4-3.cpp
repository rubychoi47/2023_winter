#include <iostream>

using namespace std;
int main(){
	int a,b;
	cout<<"a? b?";
	cin>>a>>b;
	if(a>b)
	{
		cout<<"max="<<a<<endl;
		cout<<"min="<<b<<endl;
	}
	else
	{
		cout<<"max="<<b<<endl;
		cout<<"min="<<a<<endl;
	}
	return 0;
}
