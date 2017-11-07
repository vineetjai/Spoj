#include<iostream>
using namespace std;
int main(){
	long long int i,t,first,last,sum,n,a0,d;
	cin>>t;
	while(t--){
		cin>>first>>last>>sum;
		n=(sum*2)/(first+last);
		cout<<n<<endl;
		d=(last-first)/(n-5);
		a0=first-2*d;
		for(i=0;i<n;i++)cout<<a0+i*d<<" ";
		cout<<endl;
	}
}
