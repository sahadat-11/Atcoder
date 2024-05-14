//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, q; cin >> n >> q ;
   vector<int> v(q);
   for(int i = 0; i < q; i++) {
     cin >> v[i];
   }
   map<int, int> mp;
   for(int i = 0; i < q; i++) {
     mp[v[i]]++;
   }
   for(auto [val, fre] : mp) {
     if(fre % 2) n--;
   }
   cout << n << "\n";
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
