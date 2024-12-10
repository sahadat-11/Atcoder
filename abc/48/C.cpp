//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, x; cin >> n >> x;
  vector<int> a(n + 1, 0);
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int ans = 0;
  for(int i = 1; i <= n; i++) {
    int now = a[i - 1] + a[i];
    if(now > x) {
      ans += now - x;
      a[i] -= max(0ll, now - x);
    }
  }
  cout << ans << "\n";
  return 0;
}

