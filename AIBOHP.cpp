#include <bits/stdc++.h>
using namespace std;
int lcs[6101][6101];
int LCS(string s, string r){
	for(int i=0;i<=s.length();++i)
		for(int j=0;j<=r.length();++j){
			if(i==0||j==0)
				lcs[i][j]=0;
			else if(s[i-1]==r[j-1])
				lcs[i][j]=lcs[i-1][j-1]+1;
			else
				lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
		}
	return lcs[s.length()][r.length()];
}

int main(){
	int t;
	string s,r;
	cin>>t;
	while(t--){
		cin>>s;
		r=s;
		reverse(r.begin(),r.end());
		cout<<s.length()-LCS(s,r)<<endl;
	}
}