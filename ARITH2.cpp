#include<iostream>
using namespace std;
int main(){
	long long t, res,a;
	char op;
	cin>>t;
	while(t--){
		op='0';
		cin>>res;
		while(1){
			cin>>op;
			if(op=='=') break;
			cin>>a;
			switch(op){
				case '+': res+=a;break;
				case '-': res-=a;break;
				case '*': res*=a;break;
				case '/': res/=a; break;
			}
				
		}
		cout<<res<<endl;		
	}
}
