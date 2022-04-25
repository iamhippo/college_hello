#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
	double x1, y1, x2, y2, dis2, dis, c;
	cin>>x1>>y1>>x2>>y2;
	dis2 = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	dis = sqrt(dis2);
	c = (y2-y1)/(x2-x1);
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<dis<<" "<<c<<endl;
	return 0;
}
