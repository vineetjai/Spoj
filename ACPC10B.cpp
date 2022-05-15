#include<bits/stdc++.h>
#define f(i,x,n) for(int i=x;i<n;i++)
using namespace std;
int making(int x){
  string z=to_string(x);
  int l=0;
  f(i,0,z.length()){
    l+= (z[i]-'0')*(z[i]-'0');
  }
  return l;
}
int main(){
  int a,b;
  cin>>a>>b;
  set<int> s1({4,16,37,58,89,145,42,20});
  map<int,int> m1 {{4,0},{16,1},{37,2},{58,3},{89,4},{145,5},{42,6},{20,7}};
  while(a!=0 && b!=0){
    cout<<a<<" "<<b<<" ";
    vector<int> x,y;
    x.push_back(a);
    while(s1.find(a)==s1.end() && a!=1){
      a=making(a);
      x.push_back(a);
    }
    y.push_back(b);
    while(s1.find(b)==s1.end() && b!=1){
      b=making(b);
      y.push_back(b);
    }
    if((a==1 && b!=1) || (a!=1 && b==1)){
      cout<<0<<endl;
    }
    else{
      int i=x.size()-1,j=y.size()-1;
      for(;i>=0 && j>=0 && x[i]==y[j];i--,j--);
      j++;i++;
      if(x[x.size()-1]!=y[y.size()-1]){
        int l=m1[x[x.size()-1]];
        int m=m1[y[y.size()-1]];
        int y=max(l,m),z=min(l,m);
        i+= min(y-z,8-y+z);
        i-=2;
      }
      cout<<i+1+1+j<<"\n";
    }
    cin>>a>>b;
  }
  return 0;
}
