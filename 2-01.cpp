#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int a, b, c;
	float ans;
	cin>>a>>b>>c;
	ans = a+b+c;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<ans/3<<endl;
	return 0;
}
