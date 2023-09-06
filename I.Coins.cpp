//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 3005;
int n; 
double p[N], dp[N][N];
bool vis[N][N];
double f(int i, int head, int tail) {
  if(i == n + 1) {
    if(head > tail) return 1;
    return 0; // if(tail > head);
  }
  double &ans = dp[i][head];
  if(vis[i][head]) return ans;
  vis[i][head] = true;
  ans = p[i] * f(i + 1, head + 1, tail);
  ans += (1 - p[i]) * f(i + 1, head, tail + 1);
  return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for(int i = 1; i <= n; i++) cin >> p[i];
  cout << fixed << setprecision(10) << f(1, 0, 0);
  return 0;
}
