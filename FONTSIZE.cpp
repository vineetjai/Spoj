#include<bits/stdc++.h>
using namespace std;
double h,w;
bool check(double font,vector<string> &v1){
  double last=0,heighttillnow=font;
  for(int i=0;i<v1.size();i++){
    int flag=0;
    double x=last+(2*font*(v1[i].length()+(last==0?0:1)))/3;
    if(x>w) flag=1;
    else last=x;
    if(flag){
      heighttillnow+=font;
      last=0;
      i--;
    }
    if(heighttillnow-h>=0.001) return false;
  }
  return true;
}
int main(){
  double st=0,end=7500;
  cin>>w>>h;
  string s;
  getline(cin,s);
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
  while(end-st>=0.001){
    double mid=(st+end)/2.0;
    if(check(mid,v2)) st=mid;
    else end=mid;
  }
  cout<<st<<endl;
}
