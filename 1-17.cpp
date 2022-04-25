#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	float MAP, DBP, SBP;
	cout<<"輸入舒張壓:"<<endl;
	cin>>DBP;
	cout<<"輸入收縮壓:"<<endl;
	cin>>SBP;
	MAP = DBP+(SBP-DBP)/3;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<"平均動脈壓(MAP):"<<MAP<<"mmHg"<<endl;
	return 0;
}
