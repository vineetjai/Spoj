#include<iostream>
#include<stdio.h>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	int t;
	double a,b,c,d,s,area;
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>d;
		s=(a+b+c+d)/2;
		area=sqrt((s-a)*(s-b)*(s-c)*(s-d));
		cout<<setprecision(2)<<fixed;
		cout<<area<<endl;
	}

}
