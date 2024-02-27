//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i]; 
   map<int, int> mp;
   int ans = 0;
   for(int i = 0; i < n; i++) mp[v[i]]++;
   for(auto u : mp) {
   	  if(u.second > u.first) ans += (u.second - u.first);
   	  else if(u.second < u.first) ans += u.second;
   }
   cout << ans << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}