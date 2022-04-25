//2-06

#include<iostream>
using namespace std;

int main(){
	int a=10, sum=1;
	while(a>0){
		sum = sum * a;
		a = a-1;
	}
	cout<<"10!="<<sum<<endl;
	return 0;
} 
