#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int jg=90, c=95, wgf=85, kgc=64, jjc=84;
	double total, avg;
	total = jg+c+wgf+kgc+jjc;
	avg = total/5;
	cout<<setiosflags(ios::fixed)<<setprecision(6)<<total<<'\n'<<avg<<endl;
	return 0;
}
