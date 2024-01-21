#include <iostream>

using namespace std;
int main(){
	int i,sum;
	sum=55;
	for(i=10;i>=1;i--){
		sum-=i;
	}
	cout<<"55-10-9-...-1="<<sum<<endl;
	return 0;
}
