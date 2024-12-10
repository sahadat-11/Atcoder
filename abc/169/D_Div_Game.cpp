//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
    int n; cin >> n;
    int ans = 0;
    for(int i = 2; i * i <= n; i++) {
      if(n % i == 0) {
        int cnt = 0, z = 0;
        while(n % i == 0) {
          cnt++;
          if(cnt > z) {
            z = cnt;
            ans++;
            cnt = 0;
          }
          n /= i;
        }
      }
    }
    if(n > 1) {
      ans++;
    } 
    cout << ans << "\n";
    return 0;
}