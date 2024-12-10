//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int cnt = 0;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
        for(int k = 1; k <= n; k++) {
            int x = i * j * k;
            if(x <= n) cnt++;
        }
    }
  }
  cout << cnt << "\n";
  return 0;
}
// O(N * N * N)

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int cnt = 0;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n; j++) {
        if(i * j <= n) {
            int k = n / (i * j);
            cnt += k;
        }
        else break;
    }
  }
  cout << cnt << "\n";
  return 0;
}
// O(N * N)

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int cnt = 0;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; i * j <= n; j++) {
        for(int k = 1; i * j * k <= n; k++) {
            cnt++;
        }
    }
  }
  cout << cnt << "\n";
  return 0;
}
// O(N)