#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
  int t;cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll a[n];
    map<ll,ll> m1;
    ll flag=0;
    for(int i=0;i<n;i++) {cin>>a[i];m1[a[i]]++;if(m1[a[i]]>=2) flag=1;}
    ll sum=0;
    for(ll i=0;i<n;i++){
      sum+= n-m1[a[i]];
    }
    cout<<sum/2+flag<<endl;
  }

}
