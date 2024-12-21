#ifndef ANIMALEXOTIQUE_H
#define ANIMALEXOTIQUE_H
#include <string>       // Pour l'utilisation de la classe string
#include <iostream>     // Pour les entr�es/sorties via cout
#include "Animal.h"    // Inclusion de la classe de base Anima
using namespace std;    // Permet d'�viter d'utiliser std:: devant les composants standard
// D�claration de la classe AnimalExotique
class AnimalExotique : public Animal {  // H�rite publiquement de la classe Animal
private:
    string origine;        // Attribut pour stocker l'origine de l'animal exotique
    string alimentation;   // Attribut pour stocker le type d'alimentation

public:
    // Constructeur : Initialise les attributs de la classe 
    AnimalExotique(const string& nom, int age, const string& origine, const string& alimentation);

    // Getters : Fonctions pour acc�der aux attributs priv�s
    string getOrigine() const;            // Retourne l'origine de l'animal
    string getAlimentation() const;       // Retourne le type d'alimentation

    // Setters : Fonctions pour modifier les attributs priv�s
    void setOrigine(const string& nvOrigine);          
    void setAlimentation(const string& nvAlimentation); 

    // M�thode d'affichage : Affiche les informations de l'animal exotique
    void afficher() const;                // Affiche les d�tails (nom, �ge, origine, alimentation)
};
#endif 

