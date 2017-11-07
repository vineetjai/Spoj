#include<iostream>
using namespace std;

int main(){
	long long x,y;
	cin>>x>>y;
	while(x!=-1 && y!=-1){
		if(x==1 || y==1){
			cout<<x<<"+"<<y<<"="<<x+y<<endl;
		}
		else{
			cout<<x<<"+"<<y<<"!="<<x+y<<endl;
		}
		cin>>x>>y;
	}
}