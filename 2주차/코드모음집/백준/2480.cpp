#include <iostream>

using namespace std;
int main(){
	int a,b,c,sum;
	cin>>a>>b>>c;
	if(a==b && b==c){
		sum=10000+a*1000;
	}
	else if(a==b|| b==c||c==a){
		if(a==b)
			sum=1000+a*100;
		else if(b==c)
			sum=1000+b*100;
		else
			sum=1000+c*100;
	}
	else{
		if(a>b){
			if(a>c){
				sum=a*100;
			}
			else if(a<c){
				sum=c*100;
			}
		}
		else if(b>a){
			if(b>c){
				sum=b*100;
			}
			else if(b<c)
				sum=c*100;
		}
	}
	cout<<sum;
}
