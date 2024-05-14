//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n), b(n);
   for(int i = 0; i < n; i++) {
    cin >> a[i] >> b[i]; 
   }
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
   	if(mp[b[i]]) {
   	  mp[b[i]] = min(mp[b[i]], a[i]);
   	}
   	else {
   	  mp[b[i]] =  a[i];
   	}
   }
   int ans = 0;
   for(auto [u, v] : mp) {
   	ans = max(ans, v);
   }
   cout << ans << "\n";
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