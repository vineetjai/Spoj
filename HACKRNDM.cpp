#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	signed int n,k,count=0,i;
	cin>>n>>k;
	signed int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		int flag=0,mid;
		int lb=0,ub=n-1;
		while(lb<=ub){
			mid=(lb+ub)/2;
			if(arr[mid]==arr[i]+k){
				flag=1;
				break;			
			}		
			else if(arr[mid]>arr[i]+k) ub=mid-1;
			else lb=mid+1;
		}
		if(flag==1) count+=1;
	}
	cout<<count<<"\n";
	return 0;
}
