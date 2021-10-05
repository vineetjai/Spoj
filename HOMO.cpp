#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,x;
  cin>>n;
  map<int,int> m1;
  string s;
  set<int> s1;
  while(n--){
    cin>>s>>x;

    if(s=="insert"){ m1[x]++; if(m1[x]==2) s1.insert(x);}
    else if(s=="delete" && m1.find(x)!=m1.end()) {m1[x]--; if(m1[x]==1) s1.erase(x);}
    if(m1.find(x)!=m1.end() && m1[x]==0) m1.erase(x);
    if(m1.size()==0 || (m1.size()==1 && s1.size()==0)) cout<<"neither\n";
    else if(m1.size()==1 && s1.size()!=0) cout<<"homo\n";
    else if(m1.size()>=2 && s1.size()==0) cout<<"hetero\n";
    else if(m1.size()>=2 && s1.size()!=0) cout<<"both\n";
  }
}
