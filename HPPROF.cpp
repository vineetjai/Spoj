#include<bits/stdc++.h>
using namespace std;
long long recur(int idx,string s){
  if(idx==s.length()) return 1;
  string g="";
  int flag=0;
  if(idx+1<s.length()){
    g=s.substr(idx,2);
    if(stoi(g)<=20) flag=1;
  }
  return recur(idx+1,s)+(flag==1 && s[idx]!='0'?recur(idx+2,s):0);
}
int main(){
  string s;
  cin>>s;
  cout<<recur(0,s)<<endl;
}
