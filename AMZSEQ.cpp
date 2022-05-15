#include <bits/stdc++.h>
using namespace std;
#define f(i,x,n) for(int i=x;i<n;i++)
int main(){
  int n;
  cin>>n;
  int dp[n][3];
  dp[0][0]=dp[0][1]=dp[0][2]=1;
  f(i,1,n){
    dp[i][0]=dp[i-1][1]+dp[i-1][0];
    dp[i][1]=dp[i-1][0]+dp[i-1][1]+dp[i-1][2];
    dp[i][2]=dp[i-1][1]+dp[i-1][2];
  }
  cout<<accumulate(dp[n-1],dp[n-1]+3,0)<<endl;
}
