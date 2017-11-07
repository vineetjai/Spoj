#include<iostream>
using namespace std;
int sum_of_digits(long long m){
	int count=0;
	while(m!=0){
		count+=(m%10);
		m=m/10;
	}
	return count;
}
int main(){
	int t;
	cin>>t;
	long long n;
	while(t--){
		cin>>n;
		for(long long i=n;;i++){
			if(i%sum_of_digits(i)==0){
				cout<<i<<endl;
				break;
			}
		}
	}
}
