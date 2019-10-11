#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define endl "\n"
#define cerr if(1)cerr //make me 0 before submitting
#define pb push_back
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

/* this_thread::sleep_for(chrono::milliseconds(400)); */
int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  string chess [10];
  string possible[2] = {"WBWBWBWB", "BWBWBWBW"};
  for(int i = 1; i < 9; ++i)
    cin >> chess[i];

  int cnt  = 0;
  for(int i = 1; i < 9; ++i) {
    for(auto j : possible) {
      if(chess[i] == j) {
	cnt++;
	break;
      }
    }
  }

  if (cnt == 8) cout << "YES\n" ;
  else cout << "NO\n";

  return 0;
}
