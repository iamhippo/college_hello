#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	float hour, min, sec, ans;
	cout<<"請依序輸入小時/分鐘/秒數(沒有請填0)"<<endl;
	cin>>hour>>min>>sec;
	ans = hour*3600+min*60+sec;
	cout<<setiosflags(ios::fixed)<<setprecision(6)<<"ans="<<ans<<endl;
	return 0;
}
