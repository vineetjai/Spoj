#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N=100005;
long long int lazy[4*N];
long long int seg[4*N];
void build(int l,int h,int node){
	if(l>h) return ;
	if(l==h){
		seg[node]=0;
		return;
	}
	int mid=(l+h)/2;
	build(l,mid,2*node+1);
	build(mid+1,h,2*node+2);
	seg[node]=seg[2*node+1]+seg[2*node+2];
}
void update(int l,int h,int lq,int hq,int node,long long int val){
	if(lazy[node]){
		seg[node]+=(h-l+1)*lazy[node];
		if(h!=l){
			lazy[2*node+1]+=lazy[node];
			lazy[2*node+2]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(l>hq || h<lq) return;
	if(lq<=l && h <=hq){
		seg[node]+=(h-l+1)*val;
		if(h!=l){
			lazy[2*node+1]+=val;
			lazy[2*node+2]+=val;
		}
		return;
	}
	int mid=(l+h)/2;
	update(l,mid,lq,hq,2*node+1,val);
	update(mid+1,h,lq,hq,2*node+2,val);
	seg[node]=seg[2*node+1]+seg[2*node+2];
}

long long int query(int l,int h,int lq,int hq,int node){
	if(lazy[node]){
		seg[node]+=(h-l+1)*lazy[node];
		if(h!=l){
			lazy[2*node+1]+=lazy[node];
			lazy[2*node+2]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(l>hq || h<lq) return 0;
	if(lq<=l && h <=hq) return seg[node];
	int mid=(l+h)/2;
	return query(l,mid,lq,hq,2*node+1)+query(mid+1,h,lq,hq,2*node+2);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,n,q,type;
		memset(seg,0,sizeof(seg));
		memset(lazy,0,sizeof(lazy));
		cin>>n>>q;
		long long int val;
		build(0,n-1,0);
		for(int i=0;i<q;i++){
			cin>>type;
			if(type){
				cin>>x>>y;
				cout<<query(0,n-1,x-1,y-1,0)<<endl;
			}
			else{
				cin>>x>>y>>val;
				update(0,n-1,x-1,y-1,0,val);
			}
		}
	}
}