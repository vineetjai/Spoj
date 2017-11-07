#include <iostream>
using namespace std;
int main(){
	int L;
	string s;
	long long dp[5001];
	while(true){
		cin>>s;
		if(s[0]=='0') break;
		L = s.length();
		dp[0]=dp[1]=1;
		for(int i=2;i<=L;i++){
			dp[i]=0;
			char c1=s[i-2]-'0',c2=s[i-1]-'0';
			if(c1==1 ||(c1==2 && c2<=6)) dp[i]+=dp[i-2];
			if(c2!=0)dp[i]+=dp[i-1];
		}
		
		cout<<dp[L]<<endl;
	}
}