#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double m, y;
	cin>>m>>y;
	y = y*12;
	if(y==12)
		cout<<setiosflags(ios::fixed)<<setprecision(4)<<m*0.0063*y+m<<endl;
	else if(y==24)
		cout<<setiosflags(ios::fixed)<<setprecision(4)<<m*0.0066*y+m<<endl;
	else if(y==36)
		cout<<setiosflags(ios::fixed)<<setprecision(4)<<m*0.0069*y+m<<endl;
	else if(y==60)
		cout<<setiosflags(ios::fixed)<<setprecision(4)<<m*0.0075*y+m<<endl;
	else if(y==96)
		cout<<setiosflags(ios::fixed)<<setprecision(4)<<m*0.0084*y+m<<endl;
	else
		cout<<"Not in service."<<endl;
	return 0;
}
