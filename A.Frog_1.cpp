//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, inf = 1e9 + 7;
#define int long long
int dp[N];
int a[N];
int n;

int func(int i) {
  if(i > n) return inf;
  if(i == n) return 0;
  if(dp[i] != -1) return dp[i];
  int ans = func(i + 1) + abs(a[i] - a[i + 1]);
  ans = min(ans, func(i + 2) + abs(a[i] - a[i + 2]));
  dp[i] = ans;
  return dp[i];
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, -1, sizeof dp);
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  cout << func(1);
  return 0;
}
// 1 to n


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, inf = 1e9 + 7;
#define int long long
int dp[N];
int a[N];
int n;

int func(int i) {
  if(i < 1) return inf;
  if(i == 1) return 0;
  if(dp[i] != -1) return dp[i];
  int ans = func(i - 1) + abs(a[i] - a[i - 1]);
  ans = min(ans, func(i - 2) + abs(a[i] - a[i - 2]));
  dp[i] = ans;
  return dp[i];
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, -1, sizeof dp);
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  cout << func(n);
  return 0;
}
// n to 1

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, inf = 1e9 + 7;
#define int long long
int dp[N];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n + 1];
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  dp[1] = 0;
  for(int i = 2; i <= n; i++) {
    int ans = dp[i - 1] + abs(a[i] - a[i - 1]);
    if(i - 2 >= 1) {
      ans = min(ans, dp[i - 2] + abs(a[i] - a[i - 2]));
    }
    dp[i] = ans;
  }
  cout << dp[n] << "\n";

  return 0;
}
// 1 to n


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, inf = 1e9 + 7;
#define int long long
int dp[N];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n + 1];
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  dp[n] = 0;
  for(int i = n - 1; i >= 1; i--) {
    int ans = dp[i + 1] + abs(a[i] - a[i + 1]);
    if(i + 2 <= n) {
      ans = min(ans, dp[i + 2] + abs(a[i] - a[i + 2]));
    }
    dp[i] = ans;
  }
  cout << dp[1] << "\n";

  return 0;
}
// 1 to n


// https://prnt.sc/OXZu_v1La2xv
// https://prnt.sc/JTW9nBIo5PCX 