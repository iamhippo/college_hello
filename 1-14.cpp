#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double NTD, USD;
	cin>>USD;
	NTD = USD*32.35;
	cout<<setiosflags(ios::fixed)<<setprecision(6)<<NTD<<endl;
	return 0;
}
