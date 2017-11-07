#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int temp1=0,temp2=0,temp3=0,n,count=1;
	string a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a=="3/4"){count+=1;temp3+=1;}
		if(a=="1/2")temp1+=1;
		if(a=="1/4")temp2+=1;	
	}
	temp2-=temp3;	
	if(temp2 >0)count+=(temp2/4+ceil(float(temp2%4)/4+float(temp1%2)/2));
	else count+=ceil(float(temp1%2)/2);	
	count+=temp1/2;
	cout<<count<<endl;
}
