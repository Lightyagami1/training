#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define endl "\n"
#define cerr if(1)cerr //make me 0 before submitting
#define eb emplace_back
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

/* this_thread::sleep_for(chrono::milliseconds(400)); */
int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int n; cin >> n;
  vi inp(n);
  int freq[7] = {0};
  rep(i, 0, n) { cin >> inp[i]; freq[inp[i]]++;}
  int mif = INT_MAX;
  rep(i, 1, 7) { mif = min(mif, freq[i]); }

  int tot = 0;


  return 0;
}

