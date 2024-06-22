#include <bits/stdc++.h>

using namespace std;

int main() {
    int entr, presentes = 0, sairam = 0, result1 = 0, result2 = 0;
    cin >> entr;
    for(int i = 0;i < entr;i++) {
        cin >> sairam >> presentes;
        result1 += presentes - sairam;
        result2 = max(result2, result1);
    }
    cout << result2 << endl;
    return 0;
}
