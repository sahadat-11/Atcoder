//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 65, mod = 1e9 + 7;
#define int long long
int C[N][N];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for(int i = 0; i < N; i++) {
    C[i][i] = 1;
    for(int j = 0; j < i; j++) {
      C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
    }
  }
  int a, b, k; cin >> a >> b >> k;
  while(a or b) {
    if(k <= C[a + b - 1][b]) {
      cout << 'a';
      a--;
    }
    else {
      cout << 'b';
      k -= C[a + b - 1][b];
      b--;
    }
  }
  return 0;
}

// https://prnt.sc/X4yykAHMTsCF