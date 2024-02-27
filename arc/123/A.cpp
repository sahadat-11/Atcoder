//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   ll a, b, c; cin >> a >> b >> c;
   ll x = 2 * b - a - c;
   ll ans;
   if(x >= 0) ans = x;
   else {
   	 x = abs(x);
   	 if(x % 2 == 0) ans = x / 2;
   	 else ans = x / 2 + 2;
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

// https://prnt.sc/o8rtrBS41YAh