#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double r, p=3.14159;
	cin>>r;
	cout<<setiosflags(ios::fixed)<<setprecision(5)<<r*2*p<<'\n'<<r*r*p;
	return 0;
}
