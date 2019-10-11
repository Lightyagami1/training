#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define endl "\n"
#define cerr if(0)cerr //make me 0 before submitting
#define pb push_back
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define debug(x) cerr << (#x) << ": " << (x) << '\n'
template<class T> ostream& operator<<(ostream& out, vector<T> vec) { out<<"("; for (auto& v: vec) out<<v<<", "; return out<<")"; }

const int mod = 1000000007;
/* this_thread::sleep_for(chrono::milliseconds(400)); */
auto main() -> int{
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int n, m; cin >> n >> m;
  vector<vector<int>> mat(1003, vector<int>(1003, 0));

  for(int i = 1; i <= n; ++i) {
    int r; cin >> r;
    for(int j = 1; j <= r; ++j) { mat[i][j] = 1; } 
    mat[i][r+1] = -1; // this has 2be blank
  }

  for(int j = 1; j <= m; ++j) {
    int c; cin >> c;
    for(int i = 1; i <= c; ++i) {
      if(mat[i][j] == -1) { cout << 0 ; return 0; }
      else mat[i][j] = 1;
    }
    if(mat[c+1][j] == 1) { cout << 0; return 0; }
    mat[c+1][j] = -1;// this has 2be blank
  }

  int ans  = 1;
  for(int i = 1; i <= n; ++i) {
    for(int j = 1; j <= m; ++j) {
      if(mat[i][j] == 0) { 
	mat[i][j] = 2;
	ans = ans * 2 % mod;
      }
      cerr << mat[i][j] << ' ';
    } 
    cerr << endl;
  }

  cout << ans;
  return 0;
}
