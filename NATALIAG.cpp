#include<bits/stdc++.h>
using namespace std;
bool safe(int i,int j,int n,int m){
  return !(i<0 || i>=n || j<0 || j>=m);
}
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    string s[n];
    bool vis[n][m];
    for(int i=0;i<n;i++) cin>>s[i];
    int st_x=-1,st_y=-1,en_x=-1,en_y=-1;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(s[i][j]=='$') st_x=i,st_y=j;
        else if(s[i][j]=='#') en_x=i,en_y=j;
        vis[i][j]=0;
      }
    }
    priority_queue<pair<int,pair<int,int> >,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > > pq;
    pq.push(make_pair(0,make_pair(st_x,st_y)));
    int ans=-1;
    while(!pq.empty()){
      pair<int,pair<int,int> > x=pq.top();
      int i=x.second.first,j=x.second.second;
      int w=x.first;
      pq.pop();
      if(vis[i][j]) continue;
      vis[i][j]=1;
      if(i==en_x && j==en_y) {ans=w;break;}
      if(s[i][j]=='*') continue;
      for(int k=0;k<4;k++){
        if(safe(i+dx[k],j+dy[k],n,m)) pq.push(make_pair(w+1,make_pair(i+dx[k],j+dy[k])));
      }
    }
    cout<<ans<<endl;
  }
}
