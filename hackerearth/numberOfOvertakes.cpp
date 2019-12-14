/*
 * https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/overtakes-count-33746e3a/description/
 *
 * if position constraint was not added, then simple inversion sort, merge sort, STL set(best)
 * https://www.geeksforgeeks.org/counting-inversions/
 * https://www.geeksforgeeks.org/counting-inversions-using-set-in-c-stl/
 */

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
  int n; cin  >> n;
  vi vel(n, 0); for(int i = 0; i < n; ++i) cin >> vel[i];
  vi pos(n, 0); for(int i = 0; i < n; ++i) cin >> pos[i];

  return 0;
}

