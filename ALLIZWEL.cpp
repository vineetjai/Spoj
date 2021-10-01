#include<bits/stdc++.h>
using namespace std;
string s="ALLIZZWELL";
int r,c;
char str[100][100];
int dx[]={1,1,1,0,0,0,-1,-1,-1};
int dy[]={1,0,-1,0,1,-1,-1,0,1};
int vis[101][101];
bool dfs(int i,int j,int idx){
  if(idx==10) return true;
  if(i<0 || i>=r || j>=c || j<0) return false;
  if(str[i][j]==s[idx]){
    vis[i][j]=1;
    bool flag=false;
    for(int k=0;k<9;k++){
      if(vis[i+dx[k]][j+dy[k]]==0) flag = flag || dfs(i+dx[k],j+dy[k],idx+1);
    }
    vis[i][j]=0;
    return flag;
  }
  else return false;
}
int main(){
  int t;
  cin>>t;
  for(int i=0;i<100;i++)for(int j=0;j<100;j++) vis[i][j]=0;
  while(t--){
    cin>>r>>c;
    bool flag=false;
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) cin>>str[i][j];
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
        if(str[i][j]=='A') flag=dfs(i,j,0);
        if(flag) break;
      }
      if(flag) break;
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
  }
}
