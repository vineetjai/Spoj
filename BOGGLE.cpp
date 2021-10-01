#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  map<string,int> m1;
  vector<set<string> > v1(n);
  string s;
  getline(cin,s);
  for(int i=0;i<n;i++){
    string s;
    getline(cin,s);
    vector<string> v2;
    string g="";
    for(int i=0;i<s.length();i++){
      if(s[i]==' '){
        v2.push_back(g);
        g="";
      }
      else g+=s[i];
    }
    v2.push_back(g);
    set<string> s1(v2.begin(),v2.end());
    v1[i]=s1;
    for(auto j:s1) {m1[j]++;}
  }
  vector<int> ans(n,0);
  for(int i=0;i<n;i++){
    for(auto j:v1[i]){
      // cout<<j<<" "<<m1[j]<<" "<<endl;
      if(m1[j]==1){
        if(j.length()<=4) ans[i]++;
        else if(j.length()==5) ans[i]+=2;
        else if(j.length()==6) ans[i]+=3;
        else if(j.length()==7) ans[i]+=5;
        else ans[i]+=11;
      }
    }
  }
  cout<<*max_element(ans.begin(),ans.end())<<endl;
}
