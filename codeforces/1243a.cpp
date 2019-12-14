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
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    vi pl(n);
    for(int i = 0; i < n; ++i) cin >> pl[i];
    sort(rbegin(pl), rend(pl));
    int i, cnt=0;
    for(i = 0; i< n; ++i) {
      if(pl[i] > cnt) cnt++;
      else break;
    }
    cout << cnt << endl;
  }


  return 0;
}

