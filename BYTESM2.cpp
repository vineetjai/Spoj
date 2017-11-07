#include <iostream>
using namespace std;

int A[111][111];
int max_from_three(int a, int b, int c){
	if(a>=c && a>=b)return a;
	return b>=c ? b:c;
}

int main(){
	int t,h,w,r,j,i;
	cin>>t;
	while(t--){
		cin>>h>>w;
		for(i=1;i<=h;i++){
			for(j=1;j<=w;j++)
				cin>>A[i][j];
			//A[i][j]=0;
			for(j=1;j<=w;j++)
				A[i][j]+=max_from_three(A[i-1][j-1],A[i-1][j],A[i-1][j+1]);
		}
		r=A[h][1];
		for(i=2;i<=w;i++)
			r=max_from_three(r,A[h][i],0);
		cout<<r<<endl;	
	}
}