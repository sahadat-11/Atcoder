//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, a, b; cin >> n >> a >> b;
   int week = a + b;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
     v[i] %= week;
     if(v[i] == 0) v[i] = week;
   }
   // for(int i = 0; i < n; i++) {
   //  cout << v[i] <<"  "; 
   // }
   sort(v.begin(), v.end());
   bool flag = false;
   if(v[n - 1] - (v[0] - 1) <= a) flag = true;
   for(int i = 1; i < n; i++) {
   	if(v[i] - v[i - 1] > b) {
   	 flag = true; 
   	}
   }
   if(flag) cout << "Yes\n";
   else cout << "No\n";
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