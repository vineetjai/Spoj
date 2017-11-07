#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;
	double n;
	cin>>t;
	while(t--){
		cin>>n;
		long long z=(ceil((sqrt(8*n-7)-1)/2));
		cout<<z<<endl;
	}
}
