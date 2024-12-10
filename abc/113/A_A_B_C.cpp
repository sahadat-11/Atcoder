//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  set<vector<int>> st;
  int x; cin >> x;
  for(int i = 1; i <= x; i++) {
    for(int j = 1; j <= x; j++) {
      if(i * j > x) break;
      for(int k = 1; k <= x; k++) {
        int xx = i * j * k;
        if(xx <= x) {
            st.insert({i, j, k});
        }
        else break;
      }
    }
  }
  cout << (int)st.size() << "\n";
  return 0;
}

// O(atmost O(N * N)); get TLE