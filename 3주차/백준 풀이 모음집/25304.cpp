#include <iostream>

using namespace std;
int main(){
	int n,i,sum=0,m,total,cost;
	cin>>total>>n;
	for(i=0;i<n;i++){
		cin>>cost>>m;
		sum+=cost*m;
	}
	if(total==sum){
		cout<<"Yes"<<endl;
	}
	else
		cout<<"No";
	return 0;
} 
