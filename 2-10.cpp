#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	float s, w, p, t;
	cin>>s>>w;
	if(s<500)
		cout<<setiosflags(ios::fixed)<<setprecision(3)<<"Price:5"<<"\n"<<"Total:"<<s*w*5<<endl;
	else if(500<=s, s<1000)
		cout<<setiosflags(ios::fixed)<<setprecision(3)<<"Price:"<<5*0.98<<"\n"<<"Total:"<<s*w*5*0.98<<endl;
	else if(1000<=s, s<2000)
		cout<<setiosflags(ios::fixed)<<setprecision(3)<<"Price:"<<5*0.95<<"\n"<<"Total:"<<s*w*5*0.95<<endl;
	else if(2000<=s, s<3000)
		cout<<setiosflags(ios::fixed)<<setprecision(3)<<"Price:"<<5*0.92<<"\n"<<"Total:"<<s*w*5*0.92<<endl;
	else
		cout<<setiosflags(ios::fixed)<<setprecision(3)<<"Price:"<<5*0.9<<"\n"<<"Total:"<<s*w*5*0.9<<endl;
	return 0;
}
