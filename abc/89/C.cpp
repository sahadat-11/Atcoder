//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7, mod = 1e9 + 7;
#define int long long

void solve() {
  int n; cin >> n;
  int cnt[5] = {0};
  for(int i = 0; i < n; i++) {
    string s; cin >> s;
    if(s[0] == 'M') cnt[0]++;
    if(s[0] == 'A') cnt[1]++;
    if(s[0] == 'R') cnt[2]++;
    if(s[0] == 'C') cnt[3]++;
    if(s[0] == 'H') cnt[4]++;
  }
  int ans = 0;
  for(int i = 0; i < 5; i++) {
    for(int j = i + 1; j < 5; j++) {
      for(int k = j + 1; k < 5; k++) {
        int cur = cnt[i] * cnt[j] * cnt[k];
        ans = ans + cur;
      }
    }
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

