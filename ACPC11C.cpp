#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    if(n==1){
      cout<<0<<'\n';
      continue;
    }
    long long pref[n],suff[n];
    memset(pref,0,sizeof(pref));
    memset(suff,0,sizeof(suff));
    for(int i=0;i<n;i++){
      pref[i]=(i==0?0:pref[i-1])+a[i];
    }
    for(int i=n-1;i>=0;i--){
      suff[i]=(i==n-1?0:suff[i+1])+a[i];
    }
    long long mx=LLONG_MAX;
    for(int i=0;i<n;i++){
      if(i==0) mx=min(mx,suff[i+1]);
      else if(i==n-1) mx=min(mx,pref[i-1]);
      else mx=min(mx,min(pref[i-1]*2+suff[i+1],suff[i+1]*2+pref[i-1]));
    }
    cout<<mx<<"\n";
  }
}
