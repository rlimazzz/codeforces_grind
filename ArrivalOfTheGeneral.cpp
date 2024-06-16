#include <bits/stdc++.h>

using namespace std;

int main() {
	int maior= INT_MIN;
	int menor = INT_MAX, posmenor = -1, posmaior = -1;
	int entr;
	cin >> entr;
	for(int i = 0;i < entr;i++) {
		int k;
		cin >> k;

		if(k <= menor) {
			posmenor = i;
			menor = min(menor,k);
		}

		if(k > maior) {
			posmaior = i;
			maior = max(maior, k);
		}
		
	}
	
	int solve = 0;
	if(posmaior > posmenor) {
		solve += posmaior;
		solve += entr - 2 - posmenor;
	}else {
		solve += posmaior;
		solve += entr - 1 - posmenor;
	}
	cout << solve << endl;
	return 0;
}
