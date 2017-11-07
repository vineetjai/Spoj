#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	long long n;
	while(t--){
		cin>>n;
		cout<<(n*(n+2)*(2*n+1))/8<<endl;
	}

}
