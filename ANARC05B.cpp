#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n!=0){
		long long int A[n],j,i,m,sum1=0,sum2=0,sum=0;
		for(i=0;i<n;i++) cin>>A[i];
		cin>>m;
		long long int B[m];
		for(i=0;i<m;i++) cin>>B[i];
		for(i=0,j=0;;){
			if(A[i]<B[j] && i<n && j<m){sum1+=A[i];i++; }
			else if(A[i]==B[j] && i<n && j<m  ){if(sum1>=sum2){sum=sum+sum1+A[i];sum1=0;sum2=0;i++;j++;}
							    else if(sum2 > sum1){sum=sum+sum2+B[j];sum1=0;sum2=0;i++;j++;}
 							   }	
			else if(A[i]>B[j] && i<n && j<m  ){sum2+=B[j];j++;}
			else break;
		}
		if(i<n){
			for(long long int k=i;k<n;k++){
				sum1+=A[k];
			}
		}
		if(j<m){
			for(i=j;i<m;i++){
				sum2+=B[i];
			}
		}
		if(sum2>=sum1) sum+=sum2;
		else if(sum1>sum2)sum+=sum1;
		cout<<sum<<endl;
		cin>>n;	
	}
	return 0;
}
