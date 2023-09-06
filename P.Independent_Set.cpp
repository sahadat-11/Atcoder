//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
int dp[N][2];
vector<int> adj[N];
void dfs(int u, int p) {
  dp[u][0] = 1;
  dp[u][1] = 1;
  for(auto v : adj[u]) {
    if(v != p) {
      dfs(v, u);
      dp[u][0] = 1ll* dp[u][0] * (dp[v][0] + dp[v][1]) % mod;;
      dp[u][1] = 1ll* dp[u][1] * dp[v][0] % mod;
    }
  }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  for(int i = 1; i < n; i++) { // tree edge = node - 1;
    int u, v; cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  dfs(1, 0);
  cout << (dp[1][0] + dp[1][1]) % mod;
  return 0;
}