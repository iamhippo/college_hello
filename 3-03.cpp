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
			cout<<setiosflags(ios::fixed)<<setprecision(6)<<BMI<<" "<<"�魫�L��"<<endl;
		else if(18.5<=BMI, BMI<24)
			cout<<setiosflags(ios::fixed)<<setprecision(6)<<BMI<<" "<<"���`�d��"<<endl;
		else if(24<=BMI, BMI<27)
			cout<<setiosflags(ios::fixed)<<setprecision(6)<<BMI<<" "<<"�魫�L��"<<endl;
		else if(27<=BMI, BMI<30)
			cout<<setiosflags(ios::fixed)<<setprecision(6)<<BMI<<" "<<"���תέD"<<endl;
		else if(30<=BMI, BMI<35)
			cout<<setiosflags(ios::fixed)<<setprecision(6)<<BMI<<" "<<"���תέD"<<endl;
		else
			cout<<BMI<<" "<<"���תέD"<<endl;
	return 0;
}
