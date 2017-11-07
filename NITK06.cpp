#include <iostream>
using namespace std;
 
int main() {
	int t;
	long long int n,i;
	cin>>t;
	while(t--){
		cin>>n;
		long long int a[n];
		for(i=0;i<n;i++)cin>>a[i];
		for(i=0;i<n-1;i++){
			if(a[i]<=a[i+1] && a[i]!=0 && a[i+1]!=0){a[i+1]-=a[i];a[i]=0;}
			else if(a[i]>a[i+1] && a[i]!=0 && a[i+1]!=0){a[i]-=a[i+1];a[i+1]=0;}
		}
		int flag=-1;
		for(i=0;i<n;i++){
			if(a[i]!=0){flag=1;break;}
		}
		if(flag==1)cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}