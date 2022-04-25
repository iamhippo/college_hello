#include<iostream>
using namespace std;

int main(){
	int a;
	cin>>a;
	if(a==1)
		cout<<"D.C./discontinue/停止"<<endl;
	else if(a==2)
		cout<<"q.d./quaque die (every day)/每日"<<endl;
	else if(a==3)
		cout<<"bid/bis in die (twice a day)/一天兩次"<<endl;
	else if(a==4)
		cout<<"tid/ter in die (three times a day)/一天三次"<<endl;
	else if(a==5)
		cout<<"qid/quarter in die (four times a day)/一天四次"<<endl;
	else
		cout<<"Wrong Number!"<<endl;
	return 0;
}
