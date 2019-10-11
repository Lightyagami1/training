#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define endl "\n"
#define cerr if(0)cerr
int n, c;

template<typename ...Args>
void printer(Args&&... args) {
  (std::cout << ... << args) << '\n';
}

bool check(vector<int> arr, int v) {
  int cows = 1;
  int prev = arr[0];
  for(int i = 1; i < arr.size(); ++i) {
    if(arr[i] - prev >= v)
      prev=arr[i], cows++;
  }
  return (cows >= c) ? true : false;
}

int bs(vector<int> arr) {
  int mid, l = 0, r = arr[n-1];
  cerr << l << ' ' << r << endl;
  /* printer(l, mid, r); */
  int maxi = -1;
  while(l < r) {
    mid = (r-l)/2 + l;

    cerr << l << ' ' << r << endl;
    cerr << "checking with " << mid << endl;

    if(check(arr, mid)) {
      l = mid+1;
      cerr << "upper condition " << l << endl;
      maxi = max(maxi, mid);
    } else {
      r = mid;
      cerr << "lower condition " << r << endl;
    }


    /* this_thread::sleep_for(chrono::milliseconds(400)); */
  }
  return maxi;
}

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int t; cin >> t;
  while(t--) {
    cin >> n >> c;
    vi arr(n);
    for(int i = 0; i < n; ++i) cin >> arr[i];
    sort(arr.begin(), arr.end());
    cout << bs(arr) << endl;
  }

  return 0;
}
