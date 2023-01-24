#include <iostream>
#include <string>
#include <fstream>

using namespace std;

static const int nDefinitions = 4;

int main()
{
    int longueurMax = 0;
    ifstream fichierDictionnaire;
    string texte;
    
    fichierDictionnaire.open("dictionnaire.txt");

    struct Definition {
        string mot, nature, definition;
    };

    Definition listeDefinitions[nDefinitions];
    Definition plusGrandMot;

    for (int i = 0; i < nDefinitions; i++) {
        Definition definitionLocale;
        getline(fichierDictionnaire, texte, '\t');
        definitionLocale.mot = texte; 

        getline(fichierDictionnaire, texte, '\t');
        definitionLocale.nature = texte;

        getline(fichierDictionnaire, texte, '\n');
        definitionLocale.definition = texte;

        listeDefinitions[i] = definitionLocale;

    }

    for (int i = 0; i < nDefinitions; i++) {
        Definition iDefinition = listeDefinitions[i];
        string motActuel = iDefinition.mot;

        int longueurMot = motActuel.size();

        if (longueurMot > longueurMax) {
            longueurMax = longueurMot;
            plusGrandMot = iDefinition;
        }
    }
    cout << "Le plus grand mot est: " << endl << endl;
    cout << plusGrandMot.mot << " " << plusGrandMot.nature << " " << plusGrandMot.definition << endl << endl;
}
