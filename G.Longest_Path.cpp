//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
vector<int> adj[N];
int dp[N];
int f(int u) {
  int &ans = dp[u];
  if(ans != -1) return dp[u];
  ans = 0;
  for(auto v : adj[u]) {
    ans = max(ans, 1 + f(v));
  }
  return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  for(int i = 1; i <= m; i++) {
    int u, v; cin >> u >> v;
    adj[u].push_back(v);
  }
  memset(dp, -1, sizeof dp);
  int ans = 0;
  for(int i = 1; i <= n; i++) {
    ans = max(ans, f(i));
  }
  cout << ans << endl;
  return 0;
}