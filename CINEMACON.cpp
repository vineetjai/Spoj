#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=1;i<=t;i++){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int j=0;j<n;j++) cin>>a[j];
    if(m==0) {  cout<<"Case "<<i<<": "<<0<<endl;continue;}
    int k=0,j=0,sum=0,ans=INT_MAX;
    while(j<n){
      sum+=a[j];
      while(sum>=m && k<=j){
        ans=min(ans,j-k+1);
        sum-=a[k];
        k++;
      }
      j++;
    }
    cout<<"Case "<<i<<": "<<(ans==INT_MAX?-1:ans)<<endl;
  }
}
