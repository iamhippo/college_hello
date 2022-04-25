#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int min, k;
	cin>>min;
		if(min<30)
			cout<<"0"<<endl;
		else if(30<=min, min<480)
		{
			k = ceil(min/30);
			cout<<k*15<<endl;	
		}
		else
			cout<<"240"<<endl;
	return 0;
}
