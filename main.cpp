#include "Animal.h"
#include "AnimalExotique.h"
#include "Enclos.h"
#include "Directeur.h"
#include "Visiteur.h"
#include "Soigneur.h"
#include <iostream>
#include <limits>
using namespace std;
 // Pour gérer les saisies invalides
using namespace std; 
//fonction pour saisir un Animal
Animal saisirAnimal() {
    string nom;
    int age;
    float poids;
    cout << "Entrez le nom de l'animal : ";
    cin >> nom;
    cout << "Entrez l age de l'animal : ";
    while (!(cin >> age) || age < 0) {
        cin.clear(); // Réinitialise l'état de cin
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Age invalide. Veuillez entrer un entier positif : ";
    }
    cout << "Entrez le poids de l'animal (en kg) : ";
    while (!(cin >> poids) || poids < 0) {
        cin.clear(); // Réinitialise l'état de cin
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Poids invalide. Veuillez entrer un nombre positif : ";
    }
    return Animal(nom, age, poids);
}
// Fonction pour saisir un animal exotique
AnimalExotique saisirAnimalExotique() {
    string nom, origine, alimentation;
    int age;
   cout << "Entrez le nom de l'animal exotique : ";
    cin >> nom;
    cout << "Entrez l'age de l'animal exotique : ";
    while (!(cin >> age) || (age < 0)) {
   cin.clear(); // Réinitialise l'état de cin
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Age invalide. Veuillez entrer un entier positif : ";
}
    cout << "Entrez l'origine de l'animal exotique : ";
    cin >> origine;
    cout << "Entrez le type d'alimentation (herbivore, carnivore, etc.) : ";
    cin >> alimentation;
    return AnimalExotique(nom, age, origine, alimentation);}
//les fonctions pour afficher le meno principale
void afficherMenuPrincipal() {
    cout << "\n=== Menu Principal ===\n";
    cout << "1. Gestion du Zoo\n";
    cout << "2. Gestion de Emplyee \n";
    cout << "3. Quitter\n";
    cout << "Choix: ";
}

//Focntion pour afficher menu zoo
void afficherMenuZoo() {
    cout << "\n=== Gestion du Zoo ===" << endl;
    cout << "1. Ajouter un animal" << endl;
    cout << "2. Ajouter un animal exotique" << endl;
    cout << "3. Afficher les animaux de l'enclos 1" << endl;
    cout << "4. Afficher les animaux de l'enclos 2" << endl;
    cout << "5. Afficher le nombre total d'animaux dans chaque enclos" << endl;
    cout << "6. Afficher un animal specifique" << endl;  // Nouveau choix
    cout << "7. Retire un animale." << endl;
    cout << "8. Ajouter un Visiteur."<<endl;
    cout << "9. Afficher les informations de visiteur ." << endl;
	cout << "10. Retour au Menu Principal\n" << endl ;
    cout << "Choix: " << endl ;
}
//Fonction pour afficher menu Employee 
void afficherEmployee() {
    cout << "\n=== Gestion de Employee ===\n";
    cout << "1. Ajouter un Directeur\n";
    cout << "2. Ajouter un Soigneur\n";
    cout << "3. Afficher les informations du Directeur\n";
    cout << "4. Afficher les informations du Soigneur\n";
    cout << "5. Retour au Menu Principal\n";
    cout << "Choix: ";
}
int main() {
	Enclos enclos1; // Premier enclos
    Enclos enclos2; // Deuxième enclos
    Visiteur visiteur;
    Directeur* directeur = NULL;
    Soigneur* soigneur = NULL;

    int choixPrincipal;
    do {
        afficherMenuPrincipal();
        cin >> choixPrincipal;
        cin.ignore(); // Clear newline from input buffer

        switch (choixPrincipal) {
        case 1: { 
		// Gestion du Zoo
            int choixZoo;
            do {
                afficherMenuZoo();
                cin >> choixZoo;
                cin.ignore();

                switch (choixZoo) {
                case 1: { // Ajouter un Animal
                    cout << "\nAjout d'un animal dans l'enclos 1 :" << endl;
                    Animal a = saisirAnimal();
                    enclos1.ajouterAnimal(a);
                    break;
                }
                case 2: { // Ajouter un Animal Exotique
                     cout << "\nAjout d'un animal exotique dans l'enclos 2 :" << endl;
                     AnimalExotique ae = saisirAnimalExotique();
                     enclos2.ajouterAnimal(ae); // Comme AnimalExotique hérite d'Animal, cela fonctionne
                     break;
                }
                case 3: { // Afficher les Animaux d'un Enclos
                    cout << "\nAnimaux dans l'enclos 1 :" << endl;
                    enclos1.afficherAnimaux();
                    break;
                }
                case 4: { 
                     cout << "\nAnimaux dans l'enclos 2 :" << endl;
                     enclos2.afficherAnimaux();
                     break;
                }
                case 5: {
                	//afficher tous les animaux dans chaque enclos (tableaux)
				        cout << "\nNombre total d'animaux dans chaque enclos :" << endl;
                        cout << "Enclos 1 : " << enclos1.getNombreAnimaux() << " animaux" << endl;
                        cout << "Enclos 2 : " << enclos2.getNombreAnimaux() << " animaux" << endl;
                        break;
                }
                case 6: { 
                   // Afficher un animal spécifique
                    int index, enclosChoice;
                    cout << "Dans quel enclos voulez-vous chercher un animal ? (1 pour Enclos 1, 2 pour Enclos 2) : ";
                    cin >> enclosChoice;
                    cout << "Entrez l'indice de l'animal que vous voulez afficher : ";
                    cin >> index;
                     if (enclosChoice == 1) {
                         if (index >= 0 && index < enclos1.getNombreAnimaux()) {
                         enclos1[index].afficher();  // Accès via l'opérateur []
                       } else {
                         cout << "Indice invalide dans l'enclos 1." << endl;
                         }
                    } else if (enclosChoice == 2) {
                         if (index >= 0 && index < enclos2.getNombreAnimaux()) {
                         enclos2[index].afficher();  // Accès via l'opérateur []
                         } else {
                         cout << "Indice invalide dans l'enclos 2." << endl;
                         }
                         } else {
                         cout << "Choix d'enclos invalide." << endl;
                        }
                     break;
                     }
                
                case 7: {
				 // Retirer un animal par indice
                    int index,enclosChoice;
                    cout << "Entrez ENCLOS de l'animal à retirer : ";
                    cin >> enclosChoice;
                      if (cin.fail()) {
                           cin.clear();
                           cin.ignore(numeric_limits<streamsize>::max(), '\n');
                           cout << "Saisie invalide. Veuillez entrer un entier valide.\n";
                       } 
		             if(enclosChoice==1) {
			               cout << "Entrez indice de l'animal a retirer : ";
                           cin >> index;
                           if (index >= 0 && index < enclos1.getNombreAnimaux()) {
                           enclos1.retirerAnimal(index);}
                      } else {
                      cout << "Indice invalide dans l'enclos 1." << endl;
                    }
                    if(enclosChoice==2){
            	      cout << "Entrez indice de l'animal a retirer : ";
                     cin >> index;
                 	if (index >= 0 && index < enclos2.getNombreAnimaux()) {
                        enclos2.retirerAnimal(index);}
                   else {
                    cout << "Indice invalide dans l'enclos 1." << endl;
                    }
						}
	                 break;
	                  }   
                
                case 8: { 
                //ajouter un visiteur
                      cout << "=== Saisie des informations du visiteur ===" << endl;
                       visiteur.saisirInfos();
		              break;
                }
                case 9: { 
                //afficher les informations de visiteur
                      cout << "\n=== Informations du visiteur ===" << endl;
                     visiteur.afficher();
		             break;
                }
                case 10: 
				// Retour au Menu Principal
                    cout << "Retour au menu principal.\n";
                    break;
                default:
                    cout << "Choix invalide. Veuillez reessayer.\n";
                }
              
            } while (choixZoo != 10);
            break;
    }
        case 2: { 
		// Gestion de Employee
            int choixAdmin;
            do {
                afficherEmployee();
                cin >> choixAdmin;
                cin.ignore();

                switch (choixAdmin) {
                case 1: { 
				// Ajouter un Directeur
                    string nom, ville;
                    int age;
                    cout << "Entrez le nom du directeur: ";
                    getline(cin, nom);
                    cout << "Entrez l'age du directeur: ";
                    cin >> age;
                    cin.ignore();
                    cout << "Entrez la ville du directeur: ";
                    getline(cin, ville);
                    directeur = new Directeur(nom, age, ville);
                    cout << "Directeur ajoute avec succes!\n";
                    break;
                }
                case 2: { 
				// Ajouter un Soigneur
                    string nom;
                    int age, experience;
                    cout << "Entrez le nom du soigneur: ";
                    getline(cin, nom);
                    cout << "Entrez l'age du soigneur: ";
                    cin >> age;
                    cout << "Entrez l'experience du soigneur (en annees): ";
                    cin >> experience;
                    cin.ignore();
                    soigneur = new Soigneur(nom, age, experience);

                    int nbCompetences;
                    cout << "Combien de competences souhaitez-vous ajouter? ";
                    cin >> nbCompetences;
                    cin.ignore();

                    for (int i = 0; i < nbCompetences; ++i) {
                        string competence;
                        cout << "Entrez une competence: ";
                        getline(cin, competence);
                        soigneur->ajouterCompetence(competence);
                    }
                    cout << "Soigneur ajoute avec succes!\n";
                    break;
                }
                case 3: {
				 // Afficher le Directeur
                    if (directeur) {
                        directeur->afficher();
                    } else {
                        cout << "Aucun directeur n'est ajoute.\n";
                    }
                    break;
                }
                case 4: {
				 // Afficher le Soigneur
                    if (soigneur) {
                        soigneur->afficher();
                    } else {
                        cout << "Aucun soigneur n'est ajoute.\n";
                    }
                    break;
                }
                case 5: 
				// Retour au Menu Principal
                    cout << "Retour au menu principal.\n";
                    break;
                default:
                    cout << "Choix invalide. Veuillez reessayer.\n";
                }
            } while (choixAdmin != 5);
            break;
        }
        case 3:
            cout << "Merci d'utiliser le gestionnaire de zoo. Au revoir!\n";
            break;
        default:
            cout << "Choix invalide. Veuillez reessayer.\n";
        }

    } while (choixPrincipal != 3);

    delete directeur;
    delete soigneur;
    return 0;
}

