#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;double x,y,z;
	double d;
	cin>>t;
	while(t--){
		cin>>x>>y>>z;
		double r=z*(x-sqrt(x*x+y*y+2*z*y))/(y+2*z);
		double s=z*(x+sqrt(x*x+y*y+2*z*y))/(y+2*z);
		if(floor(r)>0 && ceil(r)==floor(r))cout<<ceil(r)<<endl;
		else if(ceil(s)==floor(s) && ceil(s)<=x)cout<<ceil(s)<<endl;
		else cout<<"Not this time."<<endl;
	}
	
}