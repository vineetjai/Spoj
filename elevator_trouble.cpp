#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;

long long int euclid_gcd(int a,int b){
	if(b==0) return a;
	long long int c = a%b;
	return euclid_gcd(b,c);
}

int main(){
	long long f,s,g,u,d,gc,z,x,y;
	cin>>f>>s>>g>>u>>d;
	if(u!=0 && d!=0){
		gc=euclid_gcd(u,d);
		if(int(abs(g-s))%gc==0){
			u=u/gc;d=d/gc;
			z=(g-s)/gc;
			for(y=0;;y++){
				if((z+d*y)%u==0){cout<<(z+d*y)/u+y;break;}
			}
		}
		else cout<<"use the stairs";
	}
	else{
		if(u==0){
			if((g-s)*(-d)>0 && int(abs(g-s))%d==0){
				cout<<abs(g-s)/d;			
			}
			else cout<<"use the stairs";
		}
		else if(d==0){
			if((g-s)*(u)>0 && int(abs(g-s))%u==0){
				cout<<abs(g-s)/u;			
			}
			else cout<<"use the stairs";
		}
	}

}
