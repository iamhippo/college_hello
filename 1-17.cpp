#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	float MAP, DBP, SBP;
	cout<<"��J�αi��:"<<endl;
	cin>>DBP;
	cout<<"��J���Y��:"<<endl;
	cin>>SBP;
	MAP = DBP+(SBP-DBP)/3;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<"�����ʯ���(MAP):"<<MAP<<"mmHg"<<endl;
	return 0;
}
