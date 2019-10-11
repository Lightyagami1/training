#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define endl "\n"
#define cerr if(1)cerr //make me 0 before submitting
#define pb push_back
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define DEBUG(x) cerr << (#x) << ": " << (x) << '\n'

/* this_thread::sleep_for(chrono::milliseconds(400)); */
auto main() -> int{
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int n, x , y ;
  cin >> n >> x >> y;

  vi day(n+1);
  vi movA(n+1, 0);
  for(int i = 1; i <= n; ++i) {
    cin >> day[i];
  }

  for(int &i: day)
    cerr << i << ' ';
  cerr << endl;

  for(int i = 1; i <= n; ++i) {
    DEBUG(i);
    bool f_prev = 1;
    bool f_forw = 1;
    for(int prev = 1; prev <= x && i-prev > 0; ++prev) {
      DEBUG(prev);
      if(day[i] > day[i-prev]) {
	f_prev = 0;
	break;
      }
    }
    for(int forw = 1; forw <=y && i+forw < n+1; ++forw) {
      DEBUG(forw);
      if(day[i] > day[i+forw]) {
	f_forw = 0;
	break;
      }
    }

    if(f_prev && f_forw) {
      cout << i << endl;
      break;
    }
  }


  return 0;
}

