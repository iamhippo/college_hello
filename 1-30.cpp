#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	float mi, km;
	cin>>km;
	mi=0.62*km;
	cout<<setiosflags(ios::fixed)<<setprecision(1)<<mi<<endl;
	return 0;
}
