#include <bits/stdc++.h>

#define db cout

using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i = 0;i < n;i++) {
		int entr, posprim = 0, posfin = 0;
		cin >> entr;
		string palavra;
		cin >> palavra;
		for(int j = 0;j < (int)palavra.size();j++) {
			if(palavra[j] == 'B') {
				posprim = j;
				break;
			}
		}
		for(int k = (int)palavra.size();k > 0;k--) {
			if(palavra[k] == 'B') {
				posfin = k;
				break;
			}
		}	
		cout << (posfin - posprim) + 1<< endl;
	}	
	return 0;
}
