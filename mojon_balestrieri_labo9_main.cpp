/**
-----------------------------------------------------------------------------------
\file     Mojon_Balestrieri_Labo9_main.cpp
\authors  Colone Mojon , Hakim Balestrieri
\date     10.12.2017
\details  Le but de ce programme est de réaliser les différentes tâches indiquées
 * dans le pdf qui nous a été remis (Laboratoire9.pdf).
  
Remarque(s) : Compilateur MinGW-g++ <x.y.z>
-----------------------------------------------------------------------------------
 */

#include <iostream>
#include <cstdlib>
#include <limits>
#include <vector>
#include "mojon_balestrieri_labo9_entete.h"

using namespace std;

int main() {
   vector<int> v1;
   vector<int> v2;
   int choix = 1;

   //Tant que choix n'est pas égal à 0, on recommence
   while (choix) {
      //Affichage
      cout << "Choix : ";
      //Récupératon de la saise utilisateur
      choix = saisieValeur();
      //On sépare les cas pour le choix de l'utilisateur
      switch (choix) {
         case 1:
            int saisie;
            cout << "Valeur: ";
            saisie = saisieValeur();
            insererElementDansV1(v1, saisie);
            break;
         case 2:
            
            break;
         case 3:
            
            break;
         case 4:
            
            break;
         case 5:
            
            break;
         case 6:
            
            break;
           
         case 0: break;
         default:
            //Affichage
            cout << "Erreur de saisie entrer une nouvelle valeur" << endl;
      }
   }
   //On indique que le programme n'a pas généré d'erreur
   return EXIT_SUCCESS;
}

