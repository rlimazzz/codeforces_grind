#include <bits/stdc++.h>

#define db cout

using namespace std;

int main() {
	int entr;
	cin >> entr;
	for(int i = 0;i < entr;i++) {
		int barril, soma = 0, resultado = 0;
		vector<int> vetor;
		cin >> barril;
		for(int k =0;k < barril;k++) {
			int bar;
			cin >> bar;
			soma += bar;
			vetor.push_back(bar);
		}
		soma /= barril;
		int contador = -1;
		for(int k = 0;k < barril;k++) {
			if(k == 0 && vetor[k] - soma < 0) {
				contador = 1;
				break;
			}else {
				resultado += vetor[k] - soma;
				if(resultado < 0) {
					contador = 1;
					break;
				}
			}
		}
		if(contador == -1){
			cout << "YES" << endl;
		}else {
			cout << "NO" << endl;
		}


	}
	return 0;
}
