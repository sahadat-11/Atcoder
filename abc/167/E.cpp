//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7, mod = 998244353;
#define int long long
int f[N], invf[N];

int binexp(int a, int b) {
  int ans = 1 % mod; a %= mod; if (a < 0) a += mod;
  while(b) {
    if(b & 1) {
      ans = (ans * 1ll * a) % mod;
    }
    a = (a * 1ll * a) % mod;
    b >>= 1;
  }
  return ans;
}

int nCr(int n, int r) {
  if (n < r or n < 0) return 0;
  return 1ll * f[n] * invf[r] % mod * invf[n - r] % mod;
}

int nPr(int n, int r) {
  if (n < r or n < 0) return 0;
  return 1ll * f[n] * invf[n - r] % mod;
}

void precal() {
  f[0] = 1;
  for (int i = 1; i < N; i++) {
    f[i] = 1ll * i * f[i - 1] % mod;
  }
  invf[N - 1] = binexp(f[N - 1], mod - 2);
  for (int i = N - 2; i >= 0; i--) {
    invf[i] = 1ll * invf[i + 1] * (i + 1) % mod;
  }
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  precal();

  int n, m, k; cin >> n >> m >> k;
  int ans = 0;
  for(int i = 0; i <= k; i++) {
  	ans += nCr(n - 1, i) * m % mod * binexp(m - 1, n - i - 1) % mod;
  	ans %= mod;
  }
  cout << ans << "\n";
  return 0;
}

// https://prnt.sc/xeEJH47ALgOs