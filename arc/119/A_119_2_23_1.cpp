//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int unsigned long long

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int ans = n;
  for(int i = 0; i < 60; i++) {
    int xx = (1ll << i);
    if(xx > n) break;
    int b = i;
    int a = n / xx;
    int c = (n % xx);
    ans = min(ans, a + b + c);
  }
  cout << ans << "\n";
  return 0;
}