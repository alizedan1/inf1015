#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;


int main()
{
    const double pi = 3.141593;
    int nombreIterations;
    double estimation, ecartRelatif;
    double nombrePointsCercle = 0;
    double nombrePointsTotaux = 0;

    srand(unsigned(time(nullptr)));

    cout << "Veuillez entrer un nombre d'iterations : ";
    cin >> nombreIterations;

    for (int i = 0; i < nombreIterations; i++) {
        double x = (float)rand() / (RAND_MAX / 2) - 1;
        double y = (float)rand() / (RAND_MAX / 2) - 1;

        if ((pow(x, 2) + pow(y, 2)) < 1) {
            nombrePointsCercle++;
        }
        nombrePointsTotaux++;
    }

    estimation = (nombrePointsCercle / nombrePointsTotaux) * 4;
    ecartRelatif = (abs(pi - estimation) / pi);

    cout << setprecision(7);
    cout << "L'estimation de pi est de " << estimation << endl;
    cout << "La difference avec pi est de " << abs(pi - estimation) << endl;
    cout << "L'ecart relatif est de " << ecartRelatif * 100 << '%';

}