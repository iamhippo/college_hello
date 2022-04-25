#include<iostream>
using namespace std;

int main(){
	float a, b, c, d, e;
	cin>>a>>b>>c;
	d=b/a;
	e=c/b;
		if(d==e)
			cout<<c*c/b<<endl;
		else
			cout<<"No answer!";
	return 0;
}
