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
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    cerr << "n is " << n << endl;
    int temp[105] = {0};
    rep(i, 1, n+1) { cin >> temp[i]; cerr << ">just entered " << temp[i] << ' '; } cerr<<endl;

    int cnt0, cnt1, cnt2; 
    cnt2 = cnt1 = cnt0 = 0;

    rep(i, 1, n+1) { 
      temp[i] %= 3; 
      if(temp[i] == 0) {cnt0++;}
      else if(temp[i] == 1) { cnt1++; }
      else {cnt2++;}
    }
    cerr << "counts are " << cnt0 << ' ' << cnt1 << ' ' << cnt2 << endl;
    int tot = cnt0 ;
    int both = min(cnt1, cnt2);
    cnt1 -= both, cnt2 -= both;
    tot += (cnt1 + cnt2)/3; //3 ones form 3, 3 twos form 6

    cout << tot << endl;
  }
  return 0;
}
