#include<iostream>
using namespace std;

int main(){
	long long int n,t;
	cin>>t;
	while(t--){
		cin>>n;
		if(n%2==0)
		cout<<n/2<<endl;
		else cout<<(n+1)/2<<endl;
	}

}
