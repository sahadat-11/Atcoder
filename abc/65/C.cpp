//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int fact[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  fact[0] = 1;
  for(int i = 1; i < N; i++) {
    fact[i] = (fact[i - 1] * 1ll * i) % mod;
  }
  int n, m; cin >> n >> m;
  if(m > n) swap(n, m);
  if(n - m > 1) cout << "0\n";
  else if(n - m == 1) {
    int ans = 1;
    ans = (ans * fact[n]) % mod;
    ans = (ans * fact[m]) % mod;
    cout << ans << "\n";
  }
  else {
    int ans = 1;
    ans = (ans * fact[n]) % mod;
    ans = (ans * fact[m]) % mod;
    ans = (ans * 2) % mod;
    cout << ans << "\n";
  }
  return 0;
}