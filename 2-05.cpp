#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double up, down, height, t;
	cin>>up>>down>>height;
	t = (up+down)*height/2;
	cout<<setiosflags(ios::fixed)<<setprecision(6)<<t<<endl;
	return 0;
}
