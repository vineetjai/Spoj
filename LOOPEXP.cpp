#include<iostream>
#include<stdio.h>
using namespace std;
double res[100009];
void pre(){
	int i;
	res[1]=1;
	for(i=2;i<=100000;i++)
		res[i]=res[i-1]+1.0/i;
}
int main(){
	int t;
	pre();
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		printf("%0.1lf\n",res[n]);
	}
}
