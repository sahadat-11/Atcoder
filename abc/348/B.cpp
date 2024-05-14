//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> x(n), y(n);
   for(int i = 0; i < n; i++) {
    cin >> x[i] >> y[i]; 
   }
   for(int i = 0; i < n; i++) {
    double mx = -1; int ans;
   	for(int j = 0; j < n; j++) {
   	  int x1 = x[i], x2 = x[j], y1= y[i], y2 = y[j];
   	  double dis_square = abs(x1 - x2) * abs(x1 - x2) + abs(y1 - y2) * abs(y1 - y2);
   	  double dis = sqrtl(dis_square);
   	  //cout << dis << "\n";
   	  if(dis > mx) {
        ans = j + 1; mx = dis;
   	  }
   	}
   	cout << ans << "\n";
   }
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