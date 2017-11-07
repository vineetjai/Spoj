#include<iostream>
using namespace std;
int main(){
	long long n,i=0,z,j;
	cin>>n;
	string x[n];
	int y[n][10]={0};
	z=n;
	while(z--){
		cin>>x[i];
		i++;
	}

	for(long long k=0;k<n;k++){
		for(j=0;j<x[k].length();j++){
			y[k][int(x[k][j])-48]+=1;
		}
	}
	long long count=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			int l=10;
			while(l){
				if(y[j][l-1]!=0 && y[i][l-1]!=0){
					count+=1;
					break;
				}
				l--;
			}
		}
	}
	cout<<count<<endl;
	
	return 0;
}