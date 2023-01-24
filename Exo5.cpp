#include <iostream>

using namespace std;

static const int tailleTableau = 10;

int main() {
	int compteur = 0;
	int tableau[tailleTableau] = {};
	int tableauPairImpair[tailleTableau] = {};

	cout << "Veuillez entrer les valeurs dans le tableau en ordre: " << endl;

	for (int i = 0; i < tailleTableau; i++) {
		cin >> tableau[i];
	}

	for (int i = 0; i < tailleTableau; i++) {
		if (tableau[i] % 2 == 0) {
			tableauPairImpair[compteur] = tableau[i];
			compteur++;
		}
	}
	for (int i = 0; i < tailleTableau; i++) {
		if (tableau[i] % 2 == 1) {
			tableauPairImpair[compteur] = tableau[i];
			compteur++;
		}
	}
	cout << "Voici les valeurs paires et impaires mises en ordre du tableau: ";
	for (int i = 0; i < tailleTableau; i++) {
		cout << tableauPairImpair[i] << " ";
	}
	return 0;
}