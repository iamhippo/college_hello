#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	float hour, min, sec, ans;
	cout<<"�Ш̧ǿ�J�p��/����/���(�S���ж�0)"<<endl;
	cin>>hour>>min>>sec;
	ans = hour*3600+min*60+sec;
	cout<<setiosflags(ios::fixed)<<setprecision(6)<<"ans="<<ans<<endl;
	return 0;
}
