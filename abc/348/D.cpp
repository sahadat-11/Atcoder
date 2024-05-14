//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int h, w; cin >> h >> w;
   string s[h];
   for(int i = 0; i < h; i++) cin >> s[i];
   int n; cin >> n;
   map<pair<int, int>, int> mp;
   for(int i = 0; i < n; i++) {
   	int a, b, p; cin >> a >> b >> p;
   	a--; b--;
   	mp[{a, b}] = p;
   }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}