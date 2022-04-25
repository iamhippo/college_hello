#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	int a, b, c;
	double an, bn, cn, total;
	cin>>a>>b>>c;
	an = sqrt(a);
	bn = sqrt(b);
	cn = sqrt(c);
	total = an*10+bn*10+cn*10;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<total/3<<endl;
	return 0; 
}
