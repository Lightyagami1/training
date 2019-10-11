#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main() {
  ll s, m, c;
  cin >> s >> m >> c;
  ll co = (s + m)/c;
  s %=c, m %=c;

  cout << co << " ";

  if(s+m > c) {
    cout << min(s-m, m-s);
  } else {
    cout << 0;
  }
  return 0;
}
