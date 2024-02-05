#include <iostream>

using namespace std;
int main(){
	int num,check,cnt=0,i,j;
	int arr[100];
	cin>>num;
	for(i=0; i<num; i++){
		cin>>arr[i];
	}
	cin>>check;
	for(j=0;j<num;j++){
		if(check==arr[j]){
			cnt=cnt+1;
		}
	}
	cout<<cnt;
	return 0;
}
