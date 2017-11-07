#include<iostream>
using namespace std;
int main(){
	long long int s;
	cin>>s;
	long long n,k,t,f;
	while(s--){
		cin>>n>>k>>t>>f;
		cout<<n+k*(f-n)/(k-1)<<endl;
	}
}
