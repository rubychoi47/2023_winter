#include <iostream>

using namespace std;
int main(){
	int num,i,j,min=1000,max=-1000;
	int arr[10000];
	cin>>num;
	for(i=0; i<num; i++){
		cin>>arr[i];
	}
	for(j=0;j<num;j++){
		if(max<arr[j]){
			max=arr[j];
		}
		if(min>arr[j]){
			min=arr[j];
		}
	}
	cout<<min<<" "<<max;
	return 0;
}
