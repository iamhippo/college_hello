#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int c=40, g=60, s=50;
	float t;
	t = 40*3+60*1+50*1;
	t = t*0.75;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<t<<endl;
}
