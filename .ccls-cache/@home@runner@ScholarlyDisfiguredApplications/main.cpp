e#include <iostream>
using namespace std;

int main() {
  int N;

	cin>>N;

	for (int i=0; i<N; i++) {
		int L;
		cin>>L;
		int vagoes[L];
		for(int j=0; j<L; j++) {
			int vag;
			cin>>vag;
			vagoes[j] = vag;
		}
		int count = 0;
		for (int k=0; k<L; k++) {
			int aux;
			for (int m=k+1; m<L; m++){
				if (vagoes[k] > vagoes[m]) {
					aux = vagoes[k];
					vagoes[k] = vagoes[m];
					vagoes[m] = aux;
					count++;
				}
			}
		}
		cout << "Optimal train swapping takes " << count << " swaps." << endl;
	}
		
}
