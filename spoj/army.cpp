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
    /* string line; cin >> line; */
    int god, mgod; cin >> god >> mgod; // godzilla & mechagodzilla
    vi goda(god), mgoda(mgod); //respective army
    for(int i = 0; i < god; ++i) cin >> goda[i];
    for(int i = 0; i < mgod; ++i) cin >> mgoda[i];
    sort(goda.begin(), goda.end());
    sort(mgoda.begin(), mgoda.end());

    cerr << "Armiesss assemble ====>>>>\n";
    for(auto i : goda) cerr << i << ' '; cerr << endl;
    for(auto i : mgoda) cerr << i << ' '; cerr << endl;

    cerr << "Battle begin \n";
    int gi, mgi; gi = mgi = 0; //index of curr monster in respective army

    while(gi != god and mgi != mgod) {
      if(goda[gi] < mgoda[mgi]) {
	gi++;
	cerr << ">>>>x godzilla army \n";
      } else {
	mgi++;
	cerr << "<<<<<x mgodzilla army \n";
      }
    }
    cerr << gi << " <-- godzilla : mechagodzilla --> " << mgi << endl;
    if(gi == god) cout << "MechaGodzilla";
    else cout << "Godzilla";
    cout << endl;
  }
  return 0;
}
