/**
-----------------------------------------------------------------------------------
\file     Mojon_Balestrieri_Labo9fonctionUtiles.cpp
\authors  Colone Mojon , Hakim Balestrieri
\date     10.12.2017
  
Remarque(s) : Compilateur MinGW-g++ <x.y.z>
-----------------------------------------------------------------------------------
 */

#include "Mojon_Balestrieri_Labo9_Entete.h"
using namespace std;

int saisieValeur() {
   /*On récupère la saisie utilisateur (conversion automatique en int de tous 
   les double)*/
   int saisie;
   cin >> saisie;

   //On resaisit la valeur tant que la valeur est eronnée
   while (cin.fail()) {
      cout << "Erreur! entrez un nombre entier: ";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      //Récupération de la saisie utilisateur
      cin >> saisie;
   }
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   cin.clear();
   return saisie;
}