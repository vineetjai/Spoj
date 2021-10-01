#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
ll dp[51];
bool recur(int n1,bool flag,ll k){
  while(k>1){
    ll x= (n-n1-1)>=50?dp[50]:dp[n-n1-1];
    if(k>x) flag^=1,k-=x;
    n1++;
  }
  return flag;
}
int main(){
  int t;
  cin>>t;
  for(int i=0;i<51;i++) dp[i]=1LL<<i;
  while(t--){
    ll k;
    cin>>n>>k;
    if(recur(1,1,k)) cout<<"Male\n";
    else cout<<"Female\n";
  }
}
