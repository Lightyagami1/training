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
  vi temp(3);
  for(int i = 0; i < 3; ++i) cin >> temp[i];
  sort(temp.begin(), temp.end());
  int d; cin >> d;

  int mi, ma, mid;
  mi = temp[0], ma = temp[2], mid = temp[1];
  int s = 0;
  cerr << mi << ' ' << mid << ' ' << ma << endl;
  if (mid - mi < d) 
    s += d -(mid -mi);

  cerr << ">After 1st op : mid-" << mid << " s moved by " << s << endl;

  if(ma - mid  < d) 
    s += d - (ma - mid);
  cout << s << endl;
  cerr << ">After 2st op : ma-" << ma << " s moved by " << s << endl;


  return 0;
}

