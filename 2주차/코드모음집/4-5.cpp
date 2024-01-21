#include <iostream>

using namespace std;
int main(){
	int math,eng;
	cout<<"math? eng?";
	cin>>math>>eng;
	if(math>=60)
		if(eng>=60)
			cout<<"Pass"<<endl;
		else
			cout<<"Failure"<<endl;
	else
		cout<<"Failure"<<endl;
	return 0;
}
