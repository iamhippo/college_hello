#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	float map, dbp, sbp;
	cin>>dbp;
	sbp = dbp*1.5;
	map = dbp+(sbp-dbp)/3;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<map<<endl;
	return 0;
}
