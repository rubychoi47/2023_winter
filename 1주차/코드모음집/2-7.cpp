#include <iostream>
#include <iomanip>

using namespace std;
int main(){
	int x=10;
	cout<<"16����: "<<setiosflags(ios::showbase)<<hex<<x<<endl; 
	// ���� �÷��׿� ���� ������ ���� ����
	cout<<"8����: "<<setiosflags(ios::showbase)<<oct<<x<<endl;  
	// ���� �÷��׿� ���� ������ ���� ����
	return 0;
}
