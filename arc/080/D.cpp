//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int four = 0, two = 0;
   for(int i = 0; i < n; i++) {
   	 if(a[i] % 4 == 0) four++;
   	 else if(a[i] % 2 == 0) two++;
   }
   if(four + two / 2 >= n / 2) cout << "Yes\n";
   else cout << "No\n";
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