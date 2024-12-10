//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n), b(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i]; b[i] = a[i];
  }
  int mx = 0;
  for(int i = 1; i < n; i++) {
   if(a[i] < a[i - 1]) {
    mx = a[i - 1]; break;
   }
  }
  sort(b.begin(), b.end());
  if(b[0] == b[n - 1]) {
    cout << " \n"; return 0;
  }
  if (mx == 0) mx =  b[n - 1];
  for(int i = 0; i < n; i++) {
    if(a[i] == mx) continue;
    cout << a[i] << " ";
  }
  cout << "\n";
  return 0;
}