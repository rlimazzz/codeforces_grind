#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i = 0;i < n;i++) {
		vector<int> uns;
		int k;
		cin >> k;
		string matriz[k+1];
		for(int j =0;j < k;j++) {
			string entr;
			cin >> entr;
			matriz[j] = entr;
		}
		for(int j = 0;j < k;j++) {
			int fileira = 0;
			for(int m = 0;m < k;m++) {
				stringstream transfere;
				int numero;
				transfere << matriz[j][m];
				transfere >> numero;

				if(numero == 1) {
					fileira++;
				}
			}
			if(fileira != 0) {
				uns.push_back(fileira);
			}
		}
		sort(uns.begin(), uns.end());
		int tri = 0, qua = 0;
		for(int j = 0;j < (int)uns.size();j++) {
			if(uns[j] == 2 * (j + 1) - 1) {
				tri++;
			}
			else if(uns[j] == uns[j + 1]) {
				qua++;
			}
		}

		if(tri > qua) {
			cout << "TRIANGLE" << endl;
		}else {
			cout << "SQUARE" << endl;
		}
	}	
	return 0;
}
