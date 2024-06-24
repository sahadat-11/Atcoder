//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string s; cin >> s;
   int k; cin >> k;
   sort(s.begin(), s.end());
   int x = 0;
   do {
     x++;
     if(x == k) {
      cout << s << "\n"; break;
     }
   } while(next_permutation(s.begin(), s.end()));
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

// O(N * N!)
