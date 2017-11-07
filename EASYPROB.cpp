#include<iostream>
#include<cmath>
using namespace std;
void power(int n){
	int N=n;
	if(n<=3){
		if(n==3)cout<<"2+2(0)";
		else if(n==2)cout<<"2";
		else if(n==1)cout<<"2(0)";
		else cout<<"ERROR";
		return;
	}
	int j=0;
	while(n>0){
		j++;
		n/=2;
	}
	int a=pow(2,j-1);
	cout<<"2(";
	power(j-1);
	cout<<")";
	if(N-a!=0){cout<<"+";power(N-a);}
}
int main(){
	int n,i=0;
	while(i++<7){
		cin>>n;
		cout<<n<<"=";
		power(n);
		cout<<endl;
	}

}
