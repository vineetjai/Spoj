#include<iostream>
#include<map>
#include<set>
using namespace std;

int main(){
	long long int  t,n,i=0,r,x,y,temp=0;
	cin>>t;
	while(i<t){
		bool p=true;
		cin>>n>>r;
		map<long long int ,set<long long int> >mymap;
		for( long long int j=0;j<r;j++){
			cin>>x>>y;
			pair<set<long long int >:: iterator ,bool > result=mymap[x].insert(y);
			if(result.second == false )
				p=false;	
		}	
		cout<<"Scenario #"<<i+1<<": ";
		cout<<( ( p ) ?"possible":"impossible")<<endl;
		i++;
	}

}
