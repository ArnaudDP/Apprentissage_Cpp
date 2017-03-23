#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "fonctions.h"

using namespace std;

int main()
{
    cout << "Bonjour !" << endl << "Bienvenu dans ce petit jeu intitulé Mot mystère !" << endl;
    string motmystere(demande_mot());
    cout << "Le mot mystere est " << motmystere <<endl;

    string motMelange(melange_mot(motmystere));
    cout << "Le mot mélangé est " << motMelange <<endl;

    cout << "A toi de jouer ! Quel est le mot de départ ? ";
    string motJoueur(demande_mot());

    while (motJoueur != motmystere)
    {
        cout << "Tocard ! Tu t'es planté ! ";
        motJoueur=demande_mot();
    }

    cout << "GG ma gueule !";

    return 0;
}

