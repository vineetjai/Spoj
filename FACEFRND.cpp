#include<iostream>
#include<set>
using namespace std;
int main(){
	set<int >Set;
	int n,id,m;
	cin>>n;
	int A[n],i=0;
	while(i<n){
		cin>>id>>m;
		A[i]=id;
		while(m--){
			cin>>id;
			Set.insert(id);
		}
	i++;
	}
	for(i=0;i<n;i++){
		Set.erase(A[i]);
	}
	cout<<Set.size();
}
