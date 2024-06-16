#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adjacencia(1010, vector<int> (1010));

void solve() {
    int n;
    cin >> n;
    for(int i = 0;i < n;i++) {
        int entr, sum = 0;
        cin >> entr;
        for(int j =0;j < entr;j++) {
            int x;
            cin >> x;
            if(x < 0) {
                sum += -x;
            }else {
                sum += x;
            }
        }
        cout << sum << "\n";
    }
}

int main() {
    int t = 1;
    while(t--) {
        solve();
    }
    return 0;
}
