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

#include "Mojon_Balestrieri_Labo9_Entete.h"
using namespace std;

int main() {

   //Tant que choix n'est pas égal à 0, on recommence
   while (choix) {
      //Affichage
      cout << "Choix : ";
      //Récupératon de la saise utilisateur
      choix = saisieValeur();
      //On sépare les cas pour le choix de l'utilisateur
      switch (choix) {
         case 1:
            
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

