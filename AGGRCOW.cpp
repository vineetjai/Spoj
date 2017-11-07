#include<iostream>
#include<algorithm>
using namespace std;
long long F(long long x ,long long n,long long A[],long long m){
	long long cowsplaced =1 ,lastpos=A[0];
	for(long long i=1;i<n;i++){
		if(A[i]-lastpos >=x){
			++cowsplaced;
			if(cowsplaced == m )return 1;
			lastpos=A[i];
		}
	}
	return 0;
}
int main(){
	long long n,m,t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		long long A[n];
		for(long long i=0;i<n;i++)cin>>A[i];
		sort(A,A+n);
		long long  start=0,end=A[n-1]-A[0]+1,mid;
		while(end-start>1){
			mid=(end+start)/2;
			(F(mid,n,A,m) ? start:end)=mid;		
		}
		cout<<start<<endl;
	}
}
