#include<iostream>
using namespace std;

int main(){
	int a;
	cin>>a;
	if(a==1)
		cout<<"D.C./discontinue/����"<<endl;
	else if(a==2)
		cout<<"q.d./quaque die (every day)/�C��"<<endl;
	else if(a==3)
		cout<<"bid/bis in die (twice a day)/�@�Ѩ⦸"<<endl;
	else if(a==4)
		cout<<"tid/ter in die (three times a day)/�@�ѤT��"<<endl;
	else if(a==5)
		cout<<"qid/quarter in die (four times a day)/�@�ѥ|��"<<endl;
	else
		cout<<"Wrong Number!"<<endl;
	return 0;
}
