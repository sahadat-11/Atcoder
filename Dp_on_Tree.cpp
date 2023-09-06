//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
vector<int> adj[N];
int sz[N];
void dfs(int u, int p) {
  sz[u] = 1;
  for(auto v : adj[u]) {
    if(v != p) {
     dfs(v, u);
     sz[u] += sz[v];
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
  for(int i = 1; i <= n; i++) {
    cout << sz[i] << " ";
  }
  return 0;
}