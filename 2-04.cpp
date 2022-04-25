#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double GBP, USD, NTD;
	cin>>NTD;
	USD = NTD/32.35;
	GBP = NTD/48.09;
	cout<<setiosflags(ios::fixed)<<setprecision(6)<<USD<<'\n'<<GBP<<endl;
	return 0;
}
