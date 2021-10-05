#include <bits/stdc++.h>
using namespace std;
vector<vector<char> > grp;
int n,m;
bool vis[1000][1000];
int ar[1000][1000];
int dfs(int i,int j,int cnt){
  if(vis[i][j]){
    if(ar[i][j]==-1) ar[i][j]=cnt;
    return ar[i][j];
  }
  vis[i][j]=1;
  int ni=i,nj=j;
  if(grp[i][j]=='S') ni++;
  else if(grp[i][j]=='W') nj--;
  else if(grp[i][j]=='E') nj++;
  else if(grp[i][j]=='N') ni--;
  return ar[i][j]=dfs(ni,nj,cnt);
}
int main(){
  int n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++) for(int j=0;j<m;j++) vis[i][j]=0,ar[i][j]=-1;
  grp=vector<vector<char> >(n,vector<char>(m));
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    for(int j=0;j<m;j++) grp[i][j]=s[j];
  }
  int cnt=1;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(!vis[i][j])
        {
          dfs(i,j,cnt);
          cnt=max(cnt,ar[i][j]+1);
        }
    }
  }
  cout<<cnt-1<<endl;
}
