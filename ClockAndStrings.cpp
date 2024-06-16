#include <bits/stdc++.h>

using namespace std;

void solve() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  vector<pair<int, int>> pos;
  pos.push_back({a, 1});
  pos.push_back({b, 1});
  pos.push_back({c, 2});
  pos.push_back({d, 2});
  sort(pos.begin(), pos.end());
  if((pos[0].second == 1 && pos[1].second == 2 && pos[2].second == 1 && pos[3].second == 2) || (pos[0].second == 2 && pos[1].second == 1 && pos[2].second == 2 && pos[3].second == 1)) {
    cout << "YES\n";
  }else {
    cout << "NO\n";
  }
}


int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
