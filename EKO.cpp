#include <iostream>
#include <algorithm>
#define ll long long 
using namespace std;
ll a[1000005];
ll n,m;
ll func(ll h){
	ll rem=0;
	for(ll i=1;i<=n;i++){
		if(h<=a[i])rem+=a[i]-h;
	}
	return rem;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	cin>>n>>m;
	ll maxh=-1;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		maxh=max(maxh,a[i]);
	}
	ll l=0,h=maxh,mid,ans=0;
	while(l<=h){
		mid=(l+h)/2;
		if(func(mid)>=m){
			ans=mid;
			l=mid+1;
		}
		else{
			h=mid-1;
		}
	}
	cout<<ans<<endl;
}