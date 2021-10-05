#include<bits/stdc++.h>
using namespace std;
struct dsu{
  vector<int> par,sz;
  dsu(int n){
    par=vector<int>(n);
    sz=vector<int>(n,1);
    for(int i=0;i<n;i++){
      par[i]=i;
    }
  }
  int root(int u){
    if(par[u]==u) return u;
    return par[u]=root(par[u]);
  }
  void merge(int a,int b){
    if(root(a)==root(b)) return;
    sz[root(b)]+=sz[root(a)];
    par[root(a)]=root(b);
  }
};
int main(){
  int t;cin>>t;
  while(t--){
    int n;
    cin>>n;
    set<string> s1;
    vector<pair<string,string> > v1;
    for(int i=0;i<n;i++){
      string s,x;
      cin>>s>>x;
      s1.insert(s);
      s1.insert(x);
      pair<string,string> y(s,x);
      v1.push_back(y);
    }
    map<string,int> m1;
    int idx=0;
    for(auto i:s1) m1[i]=idx++;
    dsu d(s1.size());
    for(int i=0;i<n;i++){
      d.merge(m1[v1[i].first],m1[v1[i].second]);
      cout<<d.sz[d.root(m1[v1[i].first])]<<'\n';
    }
  }
}
