#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	double cm, kg, BMI, m, m2;
	cin>>kg>>cm;
	m = cm/100;
	m2 = m*m;
	BMI = kg/m2;
		if(BMI<18.5)
			cout<<setiosflags(ios::fixed)<<setprecision(6)<<BMI<<" "<<"體重過輕"<<endl;
		else if(18.5<=BMI, BMI<24)
			cout<<setiosflags(ios::fixed)<<setprecision(6)<<BMI<<" "<<"正常範圍"<<endl;
		else if(24<=BMI, BMI<27)
			cout<<setiosflags(ios::fixed)<<setprecision(6)<<BMI<<" "<<"體重過重"<<endl;
		else if(27<=BMI, BMI<30)
			cout<<setiosflags(ios::fixed)<<setprecision(6)<<BMI<<" "<<"輕度肥胖"<<endl;
		else if(30<=BMI, BMI<35)
			cout<<setiosflags(ios::fixed)<<setprecision(6)<<BMI<<" "<<"中度肥胖"<<endl;
		else
			cout<<BMI<<" "<<"重度肥胖"<<endl;
	return 0;
}
