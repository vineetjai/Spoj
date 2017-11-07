#include <iostream>
#include <stack>
using namespace std;
int main(){
	string s;
	int i=1;
	cin>>s;
	while(s[0]!='-'){
		stack<int>str;
		int cou=0,cou1=0,count=0;
		for(int g=0;g<s.length();g++){
			if(str.empty())
				str.push(s[g]);
			else{
				if(str.top()=='{' && s[g]=='}')
					str.pop();
				else 
					str.push(s[g]);
			}
		}
		if(str.empty())
			cout<<i<<". 0"<<endl;
		else{
			while(!str.empty()){
				if(str.top()=='{'){
					cou+=1;
					str.pop();
				}
				else{
					cou1+=1;
					str.pop();
				}
			}
		}
		if(cou%2==0 && (cou!=0 || cou1!=0)){
			count=cou/2+cou1/2;
			cout<<i<<". "<<count<<endl;
		}
		else if(cou%2==1 && (cou!=0 || cou1!=0)){
			count=cou/2+cou1/2+2;
			cout<<i<<". "<<count<<endl;
		}
		cin>>s;
		i++;
	}
}
