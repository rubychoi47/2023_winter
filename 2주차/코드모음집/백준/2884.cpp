#include <iostream>

using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	if(y<45){
		y+=15;
		if(x==0){
			x=23;
		}
		else
			x-=1;	
	}
	else
		y-=45;
	cout<<x<<" "<<y;
}
