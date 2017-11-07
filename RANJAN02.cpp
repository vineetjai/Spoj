#include<iostream>
using namespace std;
int main(){
	long long n,t;
	cin>>t;
	long long f[40];
	f[1]=2;
	for(int i=2;i<40;i++){
		f[i]=3*f[i-1]+2;
	}
	while(t--){
		cin>>n;
		cout<<f[n]<<endl;
	}
}