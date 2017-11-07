#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	long long int t,n,i,j=-1,k;
	cin>>t;
	while(t--){
		cin>>n;
		k=0;j=-1;
		long long int r[n],R[n];
		for( i=0;i<n;i++){
			cin>>r[i]>>R[i];
		}	
		long long int max1=r[0];
		for( i=0;i<n;i++){
			if(max1<r[i]){
				max1=r[i];
				k=i;
			}
		}
		for( i=0;i<n;i++){
			if(i!=k){
				if(R[i]<=max1)
					j=1;
				else{
					j=0;
					break;
				}
			}
		}
		if(j==1)
			cout<<k+1<<endl;
		else if(j==0)
			cout<<-1<<endl;
	}
}
