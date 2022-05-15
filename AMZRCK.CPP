#include <bits/stdc++.h>
using namespace std;
#define f(i,x,n) for(int i=x;i<n;i++)
int dp[251];
int main(){
  int t;
  cin>>t;
  dp[1]=2;
  dp[2]=3;
  f(i,3,251) dp[i]=dp[i-1]+dp[i-2];
  while(t--){
    int n;
    cin>>n;
    cout<<dp[n]<<"\n";
  }
}
