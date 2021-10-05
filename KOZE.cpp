#include<bits/stdc++.h>
using namespace std;
  int n,m;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
bool safe(int i,int j){
  return !(i<0 || i>=n || j<0 || j>=m);
}
int main(){
  cin>>n>>m;
  string s[n];
  for(int i=0;i<n;i++) cin>>s[i];
  vector<vector<int> > vis(n,vector<int>(m,0));
  int sh=0,wv=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(!vis[i][j]){
        queue<pair<int,int> > q;
        q.push(make_pair(i,j));
        int sheep=0,wolve=0,flag=0;
        while(!q.empty()){
          pair<int,int> x=q.front();
          q.pop();
          if(vis[x.first][x.second]) continue;
          vis[x.first][x.second]=1;
          if(s[x.first][x.second]=='k') sheep++;
          else if(s[x.first][x.second]=='v') wolve++;
          if(s[x.first][x.second]!='#'){
            if(x.first ==0 || x.first==n || x.second==0 || x.second==m) flag=1;
          }
          for(int k=0;k<4;k++){
            if(safe(x.first+dx[k],x.second+dy[k]) && s[x.first+dx[k]][x.second+dy[k]]!='#')
              q.push(make_pair(x.first+dx[k],x.second+dy[k]));
          }
        }
        if(flag==0){
          if(sheep>wolve) sh+=sheep;
          else wv+=wolve;
        }
      }
    }
  }
cout<<sh<<" "<<wv<<endl;
}
