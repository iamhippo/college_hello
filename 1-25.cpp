#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double r, pi=3.14159;
	cout<<"請輸入半徑:";
	cin>>r;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<"園面積為"<<r*r*pi<<endl;
	return 0;
}
