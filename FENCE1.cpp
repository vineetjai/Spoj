#include<iostream>
#include<stdio.h>
#define pi 3.14159
using namespace std;

int main(){
	int l;
	cin>>l;
	while(l!=0){
		double f;
		f=double(l*l)/(2*pi);
		printf("%.2f\n",f);
		cin>>l;		
	}
}
