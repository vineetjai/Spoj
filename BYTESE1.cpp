#include<bits/stdc++.h>
using namespace std;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    int ar[n][m];
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>ar[i][j];
    int a,b,t;
    cin>>a>>b>>t;
    a--,b--;
    priority_queue<pair<int,pair<int,int> >,vector<pair<int,pair<int,int> > >, greater<pair<int,pair<int,int> > > > pq;
    pq.push(make_pair(ar[0][0],make_pair(0,0)));
    int mn=0;
    vector<vector<int> > vis(n,vector<int>(m,INT_MAX));

    while(!pq.empty()){
      pair<int,pair<int,int> > x=pq.top();
      pq.pop();
      int i=x.second.first,j=x.second.second;
      int w=x.first;
      if(vis[i][j]>w) vis[i][j]=w;
      else continue;
      // cout<<i<<" "<<j<<" "<<w<<" "<<t<<endl;
      if(i==a && j==b){
        if(w<t) cout<<"YES"<<endl<<t-w<<endl;
        else cout<<"NO"<<endl;
        break;
      }
      for(int k=0;k<4;k++){
        int new_x=i+dx[k],new_y=j+dy[k];
        if(!(new_x<0 || new_x>=n || new_y<0 || new_y>=m)){
          pq.push(make_pair(w+ar[new_x][new_y],make_pair(new_x,new_y)));
        }
      }
    }
  }
}
