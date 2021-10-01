#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,x,y;
  cin>>n>>m;
  vector<vector<int> > m1(n);
  int ans=0;
  for(int i=0;i<n;i++){
    cin>>x>>y;
    x--;
    int flag=0;
    for(int i=m1[x].size()-1;i>=0;i--){
      if(m1[x][i]<y) {ans++; m1[x].push_back(y); flag=1;break;}
      else if(m1[x][i]==y){flag=1;break;}
      else{
        ans++;
        m1[x].pop_back();
      }
    }
    if(!flag) {m1[x].push_back(y); ans++;}
  }
  cout<<ans<<endl;
}
