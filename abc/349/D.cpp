//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int l, r; cin >> l >> r;
   vector<pair<int, int>> ans;
   while(l < r) {
   	for(int i = 60; i >= 0; i--) {
   	  if(l % (1ll << i) == 0) {
   	  	int d = (l / (1ll << i));
   	  	int j = d + 1;
   	  	int x = (1ll << i) * j;
   	  	if(x <= r) {
   	  	  ans.push_back({l, x});
   	  	  l = x; break;
   	  	}
   	  }
   	}
   }
   cout << (int)ans.size() << "\n";
   for(auto u : ans) {
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