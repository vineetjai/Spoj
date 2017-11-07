#include<iostream>
using namespace std;
typedef long long ll;
#define x 1000007
int main(){
	ll t,n,z;
	cin>>t;
	while(t--){
		cin>>n;
		z=(3*n+1);
		z=((z*n)/2)%x;
		cout<<z<<endl;
	}
}
