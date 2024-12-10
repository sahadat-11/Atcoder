 //In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int ans = 0;
    for (int bit = 0; bit <= 60; bit++) {
        int mask = (1LL << bit);
        int zeros = 0, ones = 0;
        for(int i = 0; i < n; i++) {
            if (a[i] & mask) ones++;
            else zeros++;
        }
        mask %= MOD;
        ans = (ans + (((mask * ones) % MOD) * zeros) % MOD) % MOD;
    }
    cout << ans << endl;
   return 0;
}
