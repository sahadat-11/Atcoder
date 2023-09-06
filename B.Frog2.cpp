//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
#define ll long long
int h[N], dp[N];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, 0x3f, sizeof dp);
  int n, k; cin >> n >> k;
  for(int i = 1; i <= n; i++) cin >> h[i];
  dp[1] = 0;
  for(int i = 2; i <= n; i++) {
      for(int j = 1; j <= k; j++) {
        if(i > j) {
        dp[i] = min(dp[i], abs(h[i] - h[i - j]) + dp[i - j]);
      }
    }
  }
  cout << dp[n] << "\n";
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
#define ll long long
int h[N], dp[N];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, 0x3f, sizeof dp);
  int n, k; cin >> n >> k;
  for(int i = 1; i <= n; i++) cin >> h[i];
  dp[n] = 0;
  for(int i = n - 1; i >= 1; i--) {
      for(int j = 1; j <= k; j++) {
        if(i + j <= n) {
        dp[i] = min(dp[i], abs(h[i] - h[i + j]) + dp[i + j]);
      }
    }
  }
  cout << dp[1] << "\n";
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
#define ll long long
int n, k; 
int h[N], dp[N];
int rec(int i) {
  if(i == n) return 0;
  if(dp[i] != -1) return dp[i];
  int ans = 1e9;
  for(int j = 1; j <= k; j++) {
    if(i + j <= n) ans = min(ans, abs(h[i] - h[i + j]) + rec(i + j));
  }
  return dp[i] = ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, -1, sizeof dp);
  cin >> n >> k;
  for(int i = 1; i <= n; i++) cin >> h[i];
  cout << rec(1);
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
#define ll long long
int n, k; 
int h[N], dp[N];
int rec(int i) {
  if(i == 1) return 0;
  if(dp[i] != -1) return dp[i];
  int ans = 1e9;
  for(int j = 1; j <= k; j++) {
    if(i - j >= 1) ans = min(ans, abs(h[i] - h[i - j]) + rec(i - j));
  }
  return dp[i] = ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, -1, sizeof dp);
  cin >> n >> k;
  for(int i = 1; i <= n; i++) cin >> h[i];
  cout << rec(n);
  return 0;
}
