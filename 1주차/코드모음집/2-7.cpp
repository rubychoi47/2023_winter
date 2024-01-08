#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	int x=10;
	cout<<"16진수: "<<setiosflags(ios::showbase)<<hex<<x<<endl; 
	// 형식 플래그에 의해 지정된 형식 설정
	cout<<"8진수: "<<setiosflags(ios::showbase)<<oct<<x<<endl;  
	// 형식 플래그에 의해 지정된 형식 설정
	return 0;
}
