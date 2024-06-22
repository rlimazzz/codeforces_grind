#include <bits/stdc++.h>

#define db cout

using namespace std;

int main() {
	int entr, contador = 1;
	cin >> entr;
	map<int, char> letras;
	for(char i = 'a';i <= 'z';i++) {
		letras[contador] = i;
		contador++;
	}
	for(int i = 0;i < entr;i++) {
		int entr, posk, posj, posm, contador = -1;
		string formada;
		cin >> entr;
		for(int k = 1; k <= 26;k++) {
			for(int j = 1;j <= 26;j++) {
				for(int m = 1;m <= 26;m++) {
					if(k + j + m == entr) {
						posk = k;
						posj = j;
						posm = m;
						contador = 1;
						break;
					}
				}
				if(contador == 1) {
					break;
				}
			}
			if(contador == 1) {
				break;
			}
		}
		formada += letras[posk];
		formada += letras[posj];
		formada += letras[posm];
		cout << formada << endl;
	}
	return 0;
}
