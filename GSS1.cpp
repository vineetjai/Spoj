#include <iostream>
#define inf 16000000
using namespace std;
int a[50002];
struct node{
	int ssum,psum,totalsum,answer;
};
node segtree[200008];
void build(int node, int l,int r){
	if(l==r){
		segtree[node]={a[l],a[l],a[l],a[l]};
		return;
	}
	int mid=(l+r)/2;
	build(2*node,l,mid);
	build(2*node+1,mid+1,r);
	struct node ls = segtree[2*node];
	struct node rs = segtree[2*node+1];
	segtree[node]={max(rs.totalsum+ls.ssum,rs.ssum),max(ls.psum,ls.totalsum+rs.psum),ls.totalsum+rs.totalsum,max(max(ls.answer,rs.answer),ls.ssum+rs.psum)};
}

node query(int node ,int l,int r,int ql,int qr){
	if(qr < l || ql > r){
		return {-inf,-inf,-inf,-inf};
	}
	if(ql<=l && qr>=r) return segtree[node];
	int mid=(l+r)/2;
	struct node ls=query(2*node,l,mid,ql,qr);
	struct node rs=query(2*node+1,mid+1,r,ql,qr);
	return {max(rs.totalsum+ls.ssum,rs.ssum),max(ls.psum,ls.totalsum+rs.psum),ls.totalsum+rs.totalsum,max(max(ls.answer,rs.answer),ls.ssum+rs.psum)};
}
int main(){
	cin.tie(0);
	int n,i;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	build(1,1,n);
	int m;
	cin>>m;
	while(m--){
		int x,y;
		cin>>x>>y;
		struct node l = query(1,1,n,x,y);
		cout<<l.answer<<endl;
	}
}