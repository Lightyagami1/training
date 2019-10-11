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
  ll h, l;
  cin >> h >> l;
  cout << (l*l - h*h)/static_cast<double>(2*h) << endl;

  return 0;
}

