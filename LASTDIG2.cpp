#include<iostream>
using namespace std;
int main(){
	int t,d;
	long long b;
	cin>>t;
	while(t--){
		cin>>d>>b;
		d=d%10;
		if(d==0)cout<<"0\n";
		else if(b==0 || d==1)cout<<"1\n";
		else if(d==2 || d==3 || d==7){
			b=b%4;
			if(b==1){if(d==2)cout<<"2\n";if(d==3)cout<<"3\n";if(d==7)cout<<"7\n";if(d==8)cout<<"8\n";}
			else if(b==2){if(d==2)cout<<"4\n";if(d==3)cout<<"9\n";if(d==7)cout<<"9\n";if(d==8)cout<<"4\n";}
			else if(b==3){if(d==2)cout<<"8\n";if(d==3)cout<<"7\n";if(d==7)cout<<"3\n";if(d==8)cout<<"2\n";}
			else if(b==0){if(d==2)cout<<"6\n";if(d==3)cout<<"1\n";if(d==7)cout<<"1\n";if(d==8)cout<<"6\n";}
		}
		else if(d==5 || d==6){cout<<d<<"\n";}
		else if(d==4 || d==9){
			b=b%2;
			if(b==1){if(d==4)cout<<"4\n";if(d==9)cout<<"9\n";}
			else if(b==0){if(d==4)cout<<"6\n";if(d==9)cout<<"9\n";}		
		}
	}	
}

