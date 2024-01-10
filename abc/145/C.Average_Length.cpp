// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define ll long long
// void solve() {
//    int n; cin >> n;
//    map<int, pair<int,int>> mp;
//    for(int i = 1; i <= n; i++) {
//    	 int x, y; cin >> x >> y;
//    	 mp[i] = {x, y};
//    }
//    vector<int> p(n);
//    for(int i = 0; i < n; i++) {
//    	 p[i] = i + 1;
//    }
//    double ans = 0;
//    int cnt = 0;
//    do {
//      //for(int i = 0; i < n; i++) cout << p[i] << " "; cout << "\n";
//      for(int i = 0; i < n - 1; i++) {
//      	auto x = mp[p[i]]; auto y = mp[p[i + 1]];
//      	int x1 = x.first, y1 = x.second;
//      	int x2 = y.first, y2 = y.second;
//      	//cout << x1 << " " << y1 << " " << x2 << " " << y2 << "\n";
//         double val = sqrtl((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//         ans += val;
//      }                                                                                                                                                                                                                                                                                                                                                                                                         
//      cnt++;
//    } while(next_permutation(p.begin(), p.end()));
//    cout << fixed << setprecision(10) << (ans / cnt) << "\n";
// }
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t = 1; 
//   //cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int n; cin >> n;
//   vector<int> x(n), y(n);
//   for (int i = 0; i < n; i++) {
//     cin >> x[i] >> y[i];
//   }
//   vector<int> p(n);
//   for (int i = 0; i < n; i++) {
//     p[i] = i;
//   }
//   auto dist = [&](int i, int j) {
//     return sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
//   };
//   double ans = 0;
//   do {
//     for (int i = 0; i + 1 < n; i++) {
//       ans += dist(p[i], p[i + 1]);
//     }
//   } while (next_permutation(p.begin(), p.end()));
  
//   for (int i = 1; i <= n; i++) {
//     ans /= i;
//   }
//   cout << fixed << setprecision(10) << ans << '\n';
//   return 0;
// }

// // O(fact(n));


#include<bits/stdc++.h>
using namespace std;
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> x(n), y(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    p[i] = i;
  }
  auto dist = [&](int i, int j) {
    return sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
  };
  double ans = 0;
  // do {
  //   for (int i = 0; i + 1 < n; i++) {
  //     ans += dist(p[i], p[i + 1]);
  //   }
  // } while (next_permutation(p.begin(), p.end()));
  int fact = 1;
  for(int i = 1; i < n; i++) {
  	fact *= i;
  }
  for(int i = 0; i < n; i++) {
  	for(int j = 0; j < n; j++) {
  		if(i != j) {
  		  ans += dist(p[i], p[j]) * fact;
  		}
  	}
  }
  for (int i = 1; i <= n; i++) {
    ans /= i;
  }
  cout << fixed << setprecision(10) << ans << '\n';
  return 0;
}
// o(n * n);
// https://prnt.sc/OIlhnv5XU91U
// https://prnt.sc/RdzqP-nndXEi
