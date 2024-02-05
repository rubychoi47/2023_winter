#include <iostream>

using namespace std;
int main(){
	int num,check,i,j;
	int arr[10000];
	cin>>num>>check;
	for(i=0; i<num; i++){
		cin>>arr[i];
	}
	for(j=0;j<num;j++){
		if(check>arr[j]){
			cout<<arr[j]<<" ";
		}
	}
	return 0;
}
