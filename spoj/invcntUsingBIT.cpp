#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define endl "\n"
#define cerr if(0)cerr //make me 0 before submitting
#define eb emplace_back
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

/* this_thread::sleep_for(chrono::milliseconds(400)); */
ll getSum(int a[]- int ind) {
  cerr << ".... entered getSum with ind: " << ind << endl;
  ll sum = 0;
  while(ind > 0) {
    sum += a[ind];
    ind -= (ind & -ind);
  }
  cerr << ".... <- returned sum is " << sum << endl;
  return sum;
}

void updatebit(int a[], int l, int index, int val) {
  cerr << "~~~~ inside updatebit with index " << index << endl;
  cerr << "before modifications bit is now as ===-->> \n";
  for(int i = 0; i <= l; ++i) cerr << a[i] << ' '; cerr << endl;
  while(index <= l) {
    a[index] += val;
    index += (index & -index);
  }
  cerr << "after modifications bit is now as ===-->> \n";
  for(int i = 0; i <= l; ++i) cerr << a[i] << ' '; cerr << endl;
}

void convert(vector<int> &a, int l) {
  vi temp(l);
  for(int i = 0; i < l; ++i) temp[i] = a[i];
  sort(temp.begin(), temp.end());

  cerr << "*** converted array \n";
  for(int i = 0; i < l; ++i) {
    a[i] = lower_bound(temp.begin(), temp.end(), a[i]) - temp.begin() + 1;
    cerr << a[i] << ' ';
  }
  cerr << endl;
}

ll invCount(vector<int> a, int l) {
  ll invcount = 0;
  convert(a, l);
  cerr << "CONVERTED ARRAY is \n";
  for(int i = 0; i < l; ++i) cerr << a[i] << ' '; cerr << endl;
  int bit[l+1];
  for(int i = 0; i <= l; ++i) bit[i] = 0; 
  for(int i = l-1; i >= 0; --i) {
    invcount += getSum(bit, a[i]-1);
    updatebit(bit, l, a[i], 1);
  }
  return invcount;
}

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    cerr << ">>> input array \n";
    vi a(n);
    for(int i = 0; i < n; ++i) {
      cin >> a[i];
      cerr << a[i] << ' ';
    }
    cerr << endl;
    cout << invCount(a, n) << endl;
  }

  return 0;
}

