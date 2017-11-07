#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long n,num=0,res;
	scanf("%lld",&n);
	while(n--){
		scanf("%lld",&res);
		num^=res;
	}
	printf("%lld\n",num);
	return 0;
}