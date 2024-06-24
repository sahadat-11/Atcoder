//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 3003, mod = 1e9 + 7;
#define int long long
double dp[N][N][N];
double p[N];
int n;
bool vis[N][N][N];

double func(int i, int head, int tail) {
  if(i == n + 1) {
    if(head > tail) return 1;
    return 0;
  }
  if(vis[i][head][tail]) return dp[i][head][tail];
  vis[i][head][tail] = true;
  double ans = 0.0;
  ans += p[i] * func(i + 1, head + 1, tail);
  ans += (1 - p[i]) * func(i + 1, head, tail + 1);
  dp[i][head][tail] = ans;
  return dp[i][head][tail];
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> p[i];
  }
  cout << fixed << setprecision(9) <<  func(1, 0, 0) << "\n";
  return 0;
}


// its not run 10^9 memory



// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 3003, mod = 1e9 + 7;
// #define int long long
// double dp[N][N];
// double p[N];
// int n;
// bool vis[N][N];

// double func(int i, int head, int tail) {
//   if(i == n + 1) {
//     if(head > tail) return 1;
//     return 0;
//   }
//   if(vis[i][head]) return dp[i][head];
//   vis[i][head] = true;
//   double ans = 0.0;
//   ans += p[i] * func(i + 1, head + 1, tail);
//   ans += (1 - p[i]) * func(i + 1, head, tail + 1);
//   dp[i][head] = ans;
//   return dp[i][head];
// }

// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   cin >> n;
//   for(int i = 1; i <= n; i++) {
//     cin >> p[i];
//   }
//   cout << fixed << setprecision(9) <<  func(1, 0, 0) << "\n";
//   return 0;
// }

// O(N * N) memory
