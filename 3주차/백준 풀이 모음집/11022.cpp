#include <iostream>

using namespace std;
int main(){
	int n,m,l,i=1;
	cin>>n;
	while(n>0){
		cin>>m>>l;
		cout<<"Case #"<<i<<": "<<m<<" + "<<l<<" = "<<m+l<<endl;
		n-=1;
		i++;
	}
	return 0;
}
