#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main(){
	int t;double x,y,z;
	cin>>t;
	while(t--){
		cin>>x>>y;
		z=sqrt(x*x-y*y);
		printf("%.3f\n",2*z);
	}
}
