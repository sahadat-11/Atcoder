//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n + 1);
   for(int i = 1; i <= n; i++) {
     cin >> v[i];
   }
   map<int, int> mp;
   for(int i = 1; i <= n; i++) {
     mp[v[i]] = i;
   }
   vector<pair<int, int>> p;
   for(int i = 1; i <= n; i++) {
    if(mp[i] != i) {
      int x = mp[i];
      int y = mp[v[i]];
      mp[v[i]] = x;
      swap(v[x], v[y]);
      if(x > y) swap(x, y);
      p.push_back({x, y});
    }
   }
   // for(int i = 1; i <= n; i++) {
   //   cout << v[i] << " ";
   // }
   cout << (int)p.size() << "\n";
   for(auto u : p) {
    cout << u.first << " " << u.second << "\n";
   }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}