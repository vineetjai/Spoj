#include<iostream>
using namespace std;
int main(){
	string s;
	long long int j=0;
	while(cin>>s){
		string f;
		long long int count=0;
		for(long long int i=0;i<s.length();i++){
			if(s[i]!='0' && count%2==0){
				s[i]='0';
				count+=1;
			}
			else if(count%2!=0 && s[i]=='0'){
				s[i]=0;
				count+=1;
			}           
		}
		cout<<"Game #"<<j+1<<": "<<count<<endl;	
		j++;	
	}	
}
