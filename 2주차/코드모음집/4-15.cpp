#include <iostream>

using namespace std;
int main(){
	int i=1;
	first:cout<<i<<" start"<<endl;
	i++;
	if(i<=3)
		goto first;
	return 0;
}
