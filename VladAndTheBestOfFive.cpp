#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i = 0;i < n;i++) {
		int conta = 0, contb = 0;
		string entr;
		cin >> entr;
		for(int j = 0;j < (int)entr.size();j++) {
			if(entr[j] == 'A') {
				conta++;
			}else {
				contb++;
			}
		}
		if(conta > contb) {
			cout << 'A' << endl;
		}else {
			cout << 'B' << endl;
		}
	}	
	return 0;
}
