//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; string s, t; cin >> n >> s >> t;
   int i = n - 1, cnt = 0;
   for(int j = n - 1; j >= 0; j--) {
   	 if(t[j] == s[i]) {
   	 	cnt++;
   	 	i--;
   	 }
   	 else {
   	 	cnt = 0; i = n - 1;
   	 }
   }
   //cout << cnt << "\n";
   cout << 2 * n - cnt << "\n";
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