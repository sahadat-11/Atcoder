//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int a[N], dp[N];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  for(int i = 1; i <= n; i++) cin >> a[i];
  for(int i = 1; i <= n; i++) {
    dp[i] = max(1, dp[i - 1]); // first element
    for(int j = 1; j < i; j++) {
      if(a[i] > a[j]) dp[i] = max(dp[i], dp[j] + 1);
    }
  }
  cout << dp[n] << "\n";
  return 0;
}