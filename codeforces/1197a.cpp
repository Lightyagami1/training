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
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    vi inp(n);
    for(int i = 0; i < n; ++i) cin >> inp[i];
    sort(inp.rbegin(), inp.rend());
    int height = inp[1]; // second largest plank
    int lower = lower_bound(inp.begin(), inp.end(), height) - inp.begin();
    cerr << "lower before " << inp[lower] << endl;
    cerr << "-=> elems : ";
    for(auto i : inp)
      cerr << i << ' '; cerr << endl;
    cerr << "height & lower " << height << '\t' << inp[lower] << endl;
    while(inp[lower] == height)
      lower++;

    /* cout << min(height, inp[lower]) << endl; */
    cout << min(height, n-lower) << endl;
  }
  return 0;
}

