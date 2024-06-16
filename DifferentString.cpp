#include <bits/stdc++.h>

using namespace std;
#define ll long long


void solve() {
  map<char, int> v;
  string entr;
  cin >> entr;
  for(char i = 'a';i <= 'z';i++) {
    v[i] = 0;
  }

  for(int i = 0;i < (int)entr.size();i++) {
    v[entr[i]]++;
  }
  int diferentes = 0;
  for(char i = 'a';i <= 'z';i++) {
    if(v[i] > 0) {
      diferentes++;
    }
  }

  if(diferentes > 1) {
    cout << "YES\n";
    string resultante = entr;
    sort(resultante.begin(),resultante.end());
    if(resultante != entr) {
      cout << resultante << "\n";
    }else {
      sort(resultante.rbegin(), resultante.rend());
      cout << resultante << "\n";
    }
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

