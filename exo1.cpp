#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int input;
    bool premier = true;

    cout << "Entrer un nombre premier : ";
    cin >> input;
    
    int root = sqrt(input);

    if (input % 2 == 0 && input != 2) {
        cout << "Ce nombre n'est pas premier car il est divisible par 2." << endl;
        premier = false;
    }

    for (int x = 3; x < root; x+=2) {
        if (input % x == 0) {
            cout << endl << "Ce nombre n'est pas premier car il est divisible par " << x << "." << endl;
            premier = false;
        }
    }
    if (premier) {
        cout << "Ce nombre est premier." << endl;
    }
   
    return main();
}
