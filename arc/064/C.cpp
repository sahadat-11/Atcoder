//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, x; cin >> n >> x;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   ll cnt = 0;
   int y = v[0] + v[1];
   //cout << y << endl;
   if(y > x) {
   	 cnt += (y - x);
   	 v[1] -= (y - x);
   	 if(v[1] < 0) v[1] = 0;
   }
   //cout << v[1] << endl;
   for(int i = 2; i < n; i++) {
   	 int z = v[i] + v[i - 1];
   	 if(z > x) cnt += (z - x), v[i] -= (z - x);
   	 if(v[i] < 0) v[i] = 0;
   	// cout << z << endl;
   }
   cout << cnt << "\n";
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


#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define elmaa ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define ll long long
#define sp (printf(" "))
#define nl (puts(""))
#define print(x) (cout << x << endl)
#define prints(x) (cout << x << " ")
#define in(x) (cin >> x)
//upsolve
//idea taken
int main(){
   int n,x;
   cin>>n>>x;
   vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];

   }
   ll ans=0;
   for(int i=1;i<n;i++){
    if(v[i]+v[i-1]>x){
        ll d=v[i]+v[i-1]-x;
        ans+=d;
        v[i]-=d;
        if(v[i]<0){
            v[i]=0;
        }
    }
   }
   cout<<ans<<"\n";
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define arefin994 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define vi v[i]
using vec = vector<ll>;
const int mxx = 1e9;

int main() {
    arefin994;
    ll n,x, cnt = 0;
    cin>>n>>x;
    vec v(n);
    for(ll i=0; i<n; i++) cin>>vi;
   for (int i = 1; i < n; i++) {
        if (v[i - 1] + vi > x) {
            ll diff = v[i - 1] + vi - x;
            cnt += diff;
            vi = max(0LL, vi - diff);
        }
    }
    cout<<cnt<<endl;
    return 0;
}
