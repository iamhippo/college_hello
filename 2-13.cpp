#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float w=35000, s, r, t;
	s = 133*11*2*4;
	r = 133*4*2*4;
	t = w+s+r;
	t = t*0.97;
	cout<<floor(t)<<endl;
	return 0;
}
