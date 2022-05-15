#include <bits/stdc++.h>
using namespace std;
#define f(i,x,n) for(int i=x;i<n;i++)

struct trie{
  int count;
  struct trie* child[26];
  trie(){
    count =0;
    f(i,0,26) child[i]=NULL;
  }
};
void insert(trie *root, string s){
  f(i,0,s.length()){
    if(root->child[s[i]-'a']==NULL){
      root->child[s[i]-'a']=new trie();
    }
    root->child[s[i]-'a']->count++;
    root=root->child[s[i]-'a'];
  }
}
int search(trie *root, string s){
  trie *temp=root;
  f(i,0,s.length()){
    if(root->child[s[i]-'a']==NULL) return 0;
    root=root->child[s[i]-'a'];
  }
  return root->count;
}
int main(){
  int n,q;
  cin>>n>>q;
  trie* root = new trie();
  f(i,0,n) {
    string s;
    cin>>s;
    insert(root,s);
  }
  f(i,0,q){
    string s;
    cin>>s;
    cout<<search(root,s)<<"\n";
  }
}
//WA on testcase 15
// const int p1=19;
// const int p2=17;
// const int mod1=1000000009;
// int main(){
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
//   int n,q;
//   cin>>n>>q;
//   unordered_map<long long,long long> m1,m2;
//   f(i,0,n){
//     string s;
//     cin>>s;
//     long long sum1=0,sum2=0;
//     f(j,0,s.length()){
//       sum1=sum1*p1+(s[j]-'a');
//       sum2=sum2*p2+(s[j]-'a');
//       sum1%=mod1;sum2%=mod1;
//       m1[sum1]++,m2[sum2]++;
//     }
//   }
//   f(i,0,q){
//     string s;
//     cin>>s;
//     long long sum1=0,sum2=0;
//     f(j,0,s.length()){
//       sum1=sum1*p1+(s[j]-'a');
//       sum2=sum2*p2+(s[j]-'a');
//       sum1%=mod1;sum2%=mod1;
//     }
//     if(m1.find(sum1)!=m1.end() && m2.find(sum2)!=m1.end()) cout<<min(m1[sum1],m2[sum2])<<"\n";
//     else cout<<0<<"\n";
//   }
// }
