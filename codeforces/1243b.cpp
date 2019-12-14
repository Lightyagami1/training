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
    int l; cin >> l;
    string sa, sb;
    cin >> sa >> sb;
    int cnt = 0;
    string sas, sbs; sas = sbs = "";
    for(int i = 0; i < l ; ++i) {
      if(sa[i] != sb[i]) {  cnt++;
	sas += sa[i];
	sbs += sb[i];
      }
    }
    if(cnt == 2 && (sas[0] == sas[1] && sbs[1] == sbs[0])) cout << "Yes\n";
    else cout << "No\n";
  }

  return 0;
}

