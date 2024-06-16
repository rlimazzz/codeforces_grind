#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve() {
  string entr;
  cin >> entr;
  vector<string> subconjuntos;
  bool verifica = false;
  string continuidade;
  for(int i = 0;i < (int)entr.size();i++) {
    if(i == 0 || (int)continuidade.size() == 0) {
      continuidade += entr[i];
    }
    else if(entr[i] == continuidade[(int)continuidade.size() - 1]) {
      continuidade += entr[i];
    }else {
      if(entr[i] == '1' && continuidade[(int)continuidade.size() - 1] == '0' && verifica == false) {
        continuidade += entr[i];
        verifica = true;
        continue;
      }
      subconjuntos.push_back(continuidade);
      continuidade.clear();
      continuidade += entr[i];
    }

  }
  subconjuntos.push_back(continuidade);
  cout << (int)subconjuntos.size() << "\n";
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

