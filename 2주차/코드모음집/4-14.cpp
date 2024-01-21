#include <iostream>

using namespace std;
int main(){
	int i,sum;
	sum=0;
	for(i=1;i<=5;i++){
		cout<<"continue i="<<i<<endl;
		if(i==3)
			continue;
		sum+=i;
		cout<<"			sum="<<sum<<endl;
	}	
	cout<<"end"<<endl;
	return 0;
}
