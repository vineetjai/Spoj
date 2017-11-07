#include<iostream>
using namespace std;
long long A[1000009];
long long x=1000000003;
void pre(){
	long long temp=0;
	for(long long  i=1;i<=1000000;i++){
		temp=(temp+i*i*i)%x;
		A[i]=(A[i-1]+temp)%x;
	}
}
int main(){
	long long t,n;
	cin>>t;
	pre();
	while(t--){
		cin>>n;
		cout<<A[n]<<endl;
	}
}
