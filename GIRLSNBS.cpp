#include<iostream>
using namespace std;
int main(){
	int g,b;
	cin>>g>>b;
	while(g!=-1 && b!=-1){
		int x=g,y=b;
		if(x!=-1 && y!=-1){
			if(g==b){
				if(g==0)cout<<"0\n";
				else cout<<"1\n";
			}
			else {
				if(g>b){x=g;y=b;}
				else {x=b;y=g;}
				if(x%(y+1)==0)cout<<x/(y+1)<<endl;
				else cout<<x/(y+1)+1<<endl;
			}	
		}
		cin>>g>>b;
	}
}
