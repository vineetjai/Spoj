#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k,i,l;
		cin>>n;
		l=n;
		if(n==1) {cout<<"TERM 1 IS 1/1"<<endl;continue;}
		for(i=sqrt(n);;i++){
			if(i*(i+1)-2*n <= 0 && (i+2)*(i+1)-2*n >= 0  ) {k=i;break;}
		}
		l=l-k*(k+1)/2;
		if(k%2!=0) cout<<"TERM "<<n<<" IS "<<l<<"/"<<k+2-l<<endl;
		else cout<<"TERM "<<n<<" IS "<<k+2-l<<"/"<<l<<endl;
	}
}
