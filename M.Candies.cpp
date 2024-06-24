// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 105, K = 1e5 + 7, mod = 1e9 + 7;
// #define int long long
// int dp[N][K], a[N];
// int n, k;

// // how many ways to distribute x candies among children 1,2,... i;
// int func(int i, int x) {
//   if(i == 0) {
//     // if(x == 0) return 1;
//     // return 0;
//     return x == 0;
//   }
//   if(dp[i][x] != -1) return dp[i][x];
//   int ans = 0;
//   for(int c = 0; c <= a[i]; c++) {
//   	if(x >= c) {
//   	  ans += func(i - 1, x - c);
//   	  ans %= mod;
//   	}
//   }
//   return dp[i][x] = ans;
// }

// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   memset(dp, -1, sizeof dp);
//   int n; cin >> n >> k;
//   for(int i = 1; i <= n; i++) {
//   	cin >> a[i];
//   }
//   cout << func(n, k);
//   return 0;
// }

// // O(N * K) // for total state;
// // Total complexity O(N * K * K); // (10^12)


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 105, K = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int dp[N][K], a[N];
int n, k;
int pre[N][K];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> k;
  for(int i = 1; i <= n; i++) {
  	cin >> a[i];
  }
  for (int i = 0; i <= n; i++) {
    for (int x = 0; x <= k; x++) {
      int &ans = dp[i][x];
      if (i == 0) {
        ans = x == 0;
      }
      else {
        ans = 0;
        // for (int c = 0; c <= a[i]; c++) {
        //   if (x >= c) {
        //     ans += dp[i - 1][x - c];
        //     ans %= mod;
        //   }
        // }
        int r = x, l = max(0ll, x - a[i]);
        ans = (pre[i - 1][r] - (l ? pre[i - 1][l - 1] : 0) + mod) % mod;
      }
    }
    for (int x = 0; x <= k; x++) {
      pre[i][x] = ((x ? pre[i][x - 1] : 0) + dp[i][x]) % mod;
    }
  }
  cout << dp[n][k] << '\n';
  return 0;
}

// O(N * K) // for total state;
// Total complexity O(N * K); // (10^7)