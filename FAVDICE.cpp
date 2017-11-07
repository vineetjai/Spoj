#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int t,n;
	double x;
	cin>>t;
	while(t--){
		x=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			x+=n/(double)i;
		}
		cout<<fixed<<setprecision(2)<<x<<endl;
	}
}
