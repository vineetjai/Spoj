#include <bits/stdc++.h>
using namespace std;

const int MAX = 3000;
double dp[MAX + 10][MAX + 10];

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   int t;
   cin >> t;
   dp[0][0] = 1.0;
   for(int i = 1; i <= MAX; i++) {
      for(int k = 1; k <= MAX; k++) {
         double p0 = 1.0 / 6.0;
         dp[i][k] = 0.0;
         for(int m = 1; m <= 6; m++) {
            if(k >= m) dp[i][k] += dp[i-1][k-m];
         }
         dp[i][k] *= p0;
      }
   }
   for(int cs = 1; cs <= t; cs++) {
      int n, k;
      cin >> n >> k;
      int rs;
      if(n > 3000 or k > 3000) rs = 0;
      else rs = dp[n][k] * 100.0;
      cout << rs << "\n";
   }
}

