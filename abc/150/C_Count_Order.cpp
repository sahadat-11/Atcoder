//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n), b(n);
  for(int i = 0; i < n; i++) {
   cin >> a[i]; 
  }
  for(int i = 0; i < n; i++) {
   cin >> b[i]; 
  }
  int x, y;
  vector <int> p(n);
  for (int i = 0; i < n; i++) {
    p[i] = i + 1;
  }
  int cnt = 0;
  do {
    bool flag1 = true, flag2 = true;
    for (int i = 0; i < n; i++) {
      if(a[i] != p[i]) {
        flag1 = false;
      }
    }
    for (int i = 0; i < n; i++) {
      if(b[i] != p[i]) {
        flag2 = false;
      }
    }
    if(flag1) x = cnt;
    if(flag2) y = cnt;
    cnt++;
  } while (next_permutation(p.begin(), p.end()));
  cout << abs(x - y);
  return 0;
}

// O(N * N!)


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> a(n), b(n);
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < n; i++) cin >> b[i];
   vector<int> p(n);
   for(int i = 0; i < n; i++) {
   	 p[i] = i + 1;
   }
   int id = 0, inda, indb;
   do {
     if(p == a) {
     	inda = id;
     }
     if(p == b) {
     	indb = id;
     }
     id++;
   } while(next_permutation(p.begin(), p.end()));
   cout << abs(inda - indb) << "\n";
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

