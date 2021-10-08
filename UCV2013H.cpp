#include<bits/stdc++.h>
using namespace std;
bool safe(int i,int j,int n,int m){
  return !(i<0 || i>=n || j<0 || j>=m);
}
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int main(){
  while(1){
    int n,m;
    cin>>n>>m;
    if(n==0 && m==0) break;
    int a[n][m];
    bool vis[n][m];
    for(int i=0;i<n;i++) for(int j=0;j<m;j++){ cin>>a[i][j]; vis[i][j]=0;}
    int total=0;
    map<int,int> m1;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(!vis[i][j]){
          if(a[i][j]==0) {vis[i][j]=1; continue;}
          int c=0;
          queue<pair<int,int> > q;
          q.push(make_pair(i,j));
          while(!q.empty()){
            pair<int,int> x=q.front();
            q.pop();
            int i=x.first,j=x.second;
            if(vis[i][j]) continue;
            c++;
            vis[i][j]=1;
            for(int k=0;k<4;k++){
              if(safe(i+dx[k],j+dy[k],n,m) && a[i+dx[k]][j+dy[k]]==1) q.push(make_pair(i+dx[k],j+dy[k]));
            }
          }
          m1[c]++;
          total++;
        }
      }
    }
    cout<<total<<'\n';
    for(auto i:m1){
      cout<<i.first<<" "<<i.second<<'\n';
    }
  }
}
