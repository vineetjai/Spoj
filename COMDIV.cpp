#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

long long  gcd(long long a,long long b){
	if(b==0) return a;
	long long c = a%b;
	return gcd(b,c);
}
int main(){
	long long t,z,a,b ;
	cin>>t;
	while(t--){
		long long count=0;
		scanf("%lld%lld",&a,&b);
		z=gcd(a,b);
		for(long long  i=1;i<sqrt(z);i++){
			if(z%i==0)count+=1;		
		}
		count*=2;
		if(ceil(sqrt(float(z)))==floor(sqrt(float(z))))count+=1;
		printf("%lld\n",count);
	}
}
