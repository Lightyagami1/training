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
  int n, i;
  cin >> n >> i;
  vi song(n); 
  for(int i = 0; i < n; ++i) cin >> song[i];
  int dbits = (8*i)/n; //distinct bits
  DEBUG(dbits);
  if(dbits > sizeof(song)) {
    cout << 0 << endl;
    return 0;
  }
  sort(song.begin(), song.end());
  map<int, int> freq;
  for(auto &i : song) {
    freq[i]++;
  }



  return 0;
}

