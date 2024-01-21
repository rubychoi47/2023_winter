#include <iostream>

using namespace std;
int main(){
	int i,a;
	a=0;
	for(i=0; i<10; i++){
		a+=1;
		if(a==5)
			break;
	}
	cout<<"a= "<<a<<endl;
	return 0;
}
