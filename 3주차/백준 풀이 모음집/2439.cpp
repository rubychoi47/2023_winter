#include <iostream>

using namespace std;
int main(){
	int n,i,j,k;
	cin>>n;
	for(i=0; i<n; i++){
		for(k=1;k<n-i;k++){
			cout<<" ";
		}
		for(j=0; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
