#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double r, pi=3.14159;
	cin>>r;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<4*r*r*r*pi/3<<" "<<4*r*r*pi<<endl;
	return 0;
}
