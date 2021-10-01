#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  int t;
  cin>>t;
  int l=1;
  while(t--){
    int n,x;
    cin>>n;
    int dp[33];
    for(int i=0;i<33;i++) dp[i]=0;
    for(int i=0;i<n;i++){
      cin>>x;
      bitset<32> bts(x);
      for(int j=0;j<32;j++) if(bts[j]) dp[j]++;
    }
    int ans=0;
    for(int i=0;i<32;i++){
      ans=(1LL*ans+1LL*dp[i]*(n-dp[i]))%(10000007);
    }
    ans=(ans*2)%10000007;
    cout<<"Case "<<l++<<": "<<ans<<'\n';
  }
}
