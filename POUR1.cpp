#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int main(){
	int t,a,b,c,z;
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		int A[5000]={0};
		int max=0;
		int x=0;
		if(c%gcd(a,b) !=0){
			cout<<-1<<endl;
			continue;
		}
		else{
			z=gcd(a,b);
			a=a/z;
			b=b/z;
			c=c/z;
			if(a >=0 && b>=0){
				if(a>=b){
					for(int i=0;i<=ceil(c/b);i++){
						if((c-i*b)%a==0){
							A[x++]=i + (c-i*b)%a;
							if(max < i + (c-i*b)%a){
								max=i + (c-i*b)%a;
							}
						}
					}
				}
				else{
					for(int i=0;i<=ceil(c/a);i++){
						if((c-i*a)%b==0){
							A[x++]=i + (c-i*a)%b;
							if(max < i + (c-i*a)%b){
								max=i + (c-i*a)%b;
							}
						}
					}
				}
			}
			cout<<max<<endl;
			
		}
	}
}