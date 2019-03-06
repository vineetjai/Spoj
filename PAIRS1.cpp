#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
ll find(ll a[],ll val,ll l,ll h){
	ll m=(l+h)/2;
	if(val==a[m]) return 1;
	if(l>=h) return 0;
	else{
		if(val>a[m]) return find(a,val,m+1,h);
		else return find(a,val,l,m-1);
	}
}
int main(){
	ll n,k;
	cin>>n>>k;
	ll a[n];
	for(ll i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	ll c=0;
	for(ll i=0;i<n;i++){
		ll x=a[i]+k;
		c+=find(a,x,0,n-1);
	}
	cout<<c<<endl;
}