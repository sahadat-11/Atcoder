//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 105;
const int inf = 1e11 + 7;
int n, W, w[N], v[N];
int dp[N][N * 1000];

int func(int i, int total_value) {
  if(i == n + 1) {
    if(total_value == 0) return 0;
    return inf;
  }
  int &ans = dp[i][total_value];
  if(ans != -1) return ans;
  ans = func(i + 1, total_value);
  ans = min(ans, w[i] + func(i + 1, total_value - v[i]));
  return ans;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  memset(dp, -1, sizeof dp);
  cin >> n >> W;
  for(int i = 1; i <= n; i++) {
    cin >> w[i] >> v[i];
  }
  int ans = 0;
  for(int total_value = 1; total_value <= n * 1000; total_value++) {
    if(func(1, total_value) <= W) {
      ans = max(ans, total_value);
    }
  }
  cout << ans << "\n";
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 0x3f3f3f3f;
const int N = 1e5 + 10;
int n, capacity;
int dp[N];
int32_t main(){
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> n >> capacity;
  memset(dp, INF, sizeof dp);
  int w[n + 1], v[n + 1];
  for(int i = 1; i <= n; i++) {
    cin >> w[i] >> v[i];
  }
  dp[0] = 0;
  int res = 0;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1e5; j >= v[i]; --j) {
      dp[j] = min(dp[j], dp[j - v[i]] + w[i]);
      if (dp[j] <= capacity) res = max(res, j);
    }
  }
  cout << res << endl;
  return 0;
}
