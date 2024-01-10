//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n ; cin >> n;
   for(int i = 0; i <= n; i++) {
     for(int j = 0; j <= n - i; j++) {
      for(int k = 0; k <= n - j - i; k++) {
        cout << i << " " << j << " " << k << "\n";
      }
     }
   }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}