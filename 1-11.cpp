#include<iostream>
using namespace std;

int main(){
	int a, b, sum=0, t;
	cin>>a;
	t = a;
	while(a>0){
		b=a%10;
		sum=sum+(b*b*b);
		a=a/10;
	}
	if(sum==t)
		cout<<"Yes!"<<endl;
	else
		cout<<"No!"<<endl;
	return 0;
}
