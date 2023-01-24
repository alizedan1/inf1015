#include <iostream>
#include <cmath>

using namespace std;

int valider(int sommeDette, double tauxInteret, double remboursementMensuel) {

	if (sommeDette < 0 || sommeDette > INFINITY) {
		return false;
	}
	if (tauxInteret < 0 || tauxInteret > 100) {
		return false;
	}
	if (remboursementMensuel < 0 || remboursementMensuel > INFINITY) {
		return false;
	}
	return true;
}

int main() {
	double sommeDette, tauxInteret, remboursementMensuel, tauxMensuel;
	int compteurMois;
	sommeDette = -1; tauxInteret = -1; remboursementMensuel = -1; compteurMois = 0;

	while (!valider(sommeDette, tauxInteret, remboursementMensuel)) {
		cout << "Entrer la quantite de dette : ";
		cin >> sommeDette;
		cout << endl << "Entrer le taux d'interet : ";
		cin >> tauxInteret;
		cout << endl << "Entrer le remboursement mensuel : ";
		cin >> remboursementMensuel;
	}

	tauxMensuel = tauxInteret / 12;

	while (sommeDette > 0) {
		sommeDette = sommeDette * (1 + (tauxMensuel / 100));
		sommeDette -= remboursementMensuel;
		compteurMois++;
	}

	cout << endl << "Cela va prendre " << compteurMois << " mois." << endl;


}
