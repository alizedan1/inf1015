#include <iostream>
#include <cmath>

using namespace std;

int valider(double hauteurInitiale, double coefficient, double nombreRebonds) {
	if (hauteurInitiale < 0) { return false; }
	if (coefficient > 1 || coefficient < 0) { return false; }
	if (nombreRebonds < 0) { return false; }

	return true;
}

int main()
{
	const double constanteGravite = 9.81;
	double hauteur, coefficient, nombreRebonds;
	hauteur = -1; coefficient = -1; nombreRebonds = -1;

	while (!valider(hauteur, coefficient, nombreRebonds)) {
		cout << "Entrer la hauteur initale : ";
		cin >> hauteur;
		cout << endl << "Entrer le coefficient de rebond : ";
		cin >> coefficient;
		cout << endl << "Entrer le nombre de rebonds : ";
		cin >> nombreRebonds;
	}

	double vitesse = sqrt(hauteur * constanteGravite * 2);

	while (nombreRebonds) {
		nombreRebonds--;
		vitesse = vitesse * coefficient;
		hauteur = pow(vitesse, 2) / (2 * constanteGravite);
	}
	cout << endl << "La hauteur finale sera de " << hauteur << " unites" << endl;
	return 0;
}

