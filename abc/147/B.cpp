//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   string s; cin >> s;
   int n = s.size();
   int cnt = 0;
   for(int i = 0; i < n / 2; i++) {
   	 if(s[i] != s[n - 1 - i]) cnt++;
   }
   cout << cnt << "\n";
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