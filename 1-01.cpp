#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	float a;
	cin>>a;
	cout<<setiosflags(ios::fixed)<<setprecision(1)<<a*23.7<<endl;
	return 0; 
}
