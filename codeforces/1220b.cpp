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
auto main() -> int{
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int n; cin >> n;
  int tab[n][n];
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < n; ++j) {
      cin >> tab[i][j];
    }}
  int ab = tab[0][1];
  int ac = tab[0][2];
  int bc = tab[1][2];
  int a2 = sqrt((long long)ab*ac / bc);
  cout << a2 << ' ';

  for(int i = 1; i < n; ++i) cout << tab[0][i]/a2 << ' ';

  return 0;
}

