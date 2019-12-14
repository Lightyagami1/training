#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define endl "\n"
#define cerr if(1)cerr //make me 0 before submitting
#define pb push_back
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define debug(x) cerr << (#x) << ": " << (x) << '\n'
template<class T> ostream& operator<<(ostream& out, vector<T> vec) { out<<"("; for (auto& v: vec) out<<v<<", "; return out<<")"; }

/* this_thread::sleep_for(chrono::milliseconds(400)); */
auto main() -> int {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int n, t; cin >> n >> t;
  vi por(n+1);
  for(int i = 1; i <= n; ++i) cin >> por[i];
  int cur = 1;
  while(cur < t) {
    int temp = cur;
    cur += por[temp];
  }
  if(cur == t) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}

