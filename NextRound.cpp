#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, check = 0;
    vector<int> entradas;
    cin >> n >> k;
    for(int i = 0;i < n;i++) {
        int entr;
        cin >> entr;
        if(i + 1 == k) {
            check = entr;
        }
        entradas.push_back(entr);
    }
    int solve = 0;
    for(int i = 0;i < n;i++) {
        if(entradas[i] >= check && entradas[i] > 0){
            solve++;
        }
    }
    cout << solve << endl;
    return 0;
}
