#include<iostream>
using namespace std;

long long int phi(long long int n) {          
	long long int result = n;          
	for(long long int i=2;i*i <= n;i++) {            
		if (n % i == 0) result -= result / i;            
		while (n % i == 0) n /= i;          
	}          
	if (n > 1) result -= result / n;          
	return result;        
}  
 
int main(){
	int t;
	cin>>t;
	long long n;
	while(t--){
		cin>>n;
		cout<<phi(n)<<endl;	
	}
}
