//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n);
  int cnt4 = 0, cnt2 = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(a[i] % 4 == 0) cnt4++;
    if(a[i] % 4 == 2) cnt2++; // for 2 and 6
  }
  //cnt4 += cnt2 / 2;
  if(cnt2) n = (n - cnt2 + 1);
  if(cnt4 >= n / 2) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}