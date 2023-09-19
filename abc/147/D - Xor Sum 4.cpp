 //In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll n; cin >> n;
   ll a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll ans = 0;
    for (ll base = 0; base <= 60; base++) {
        ll mask = (1LL << base);
        ll zeros = 0, ones = 0;
        for(ll i = 0; i < n; i++) {
            if (a[i] & mask) ones++;
            else zeros++;
        }
        mask %= MOD;
        ans = (ans + (((mask * ones) % MOD) * zeros) % MOD) % MOD;
    }
    cout << ans << endl;
   return 0;
}
