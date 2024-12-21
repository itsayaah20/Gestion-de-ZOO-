#ifndef ANIMALEXOTIQUE_H
#define ANIMALEXOTIQUE_H
#include <string>       // Pour l'utilisation de la classe string
#include <iostream>     // Pour les entrées/sorties via cout
#include "Animal.h"    // Inclusion de la classe de base Anima
using namespace std;    // Permet d'éviter d'utiliser std:: devant les composants standard
// Déclaration de la classe AnimalExotique
class AnimalExotique : public Animal {  // Hérite publiquement de la classe Animal
private:
    string origine;        // Attribut pour stocker l'origine de l'animal exotique
    string alimentation;   // Attribut pour stocker le type d'alimentation

public:
    // Constructeur : Initialise les attributs de la classe 
    AnimalExotique(const string& nom, int age, const string& origine, const string& alimentation);

    // Getters : Fonctions pour accéder aux attributs privés
    string getOrigine() const;            // Retourne l'origine de l'animal
    string getAlimentation() const;       // Retourne le type d'alimentation

    // Setters : Fonctions pour modifier les attributs privés
    void setOrigine(const string& nvOrigine);          
    void setAlimentation(const string& nvAlimentation); 

    // Méthode d'affichage : Affiche les informations de l'animal exotique
    void afficher() const;                // Affiche les détails (nom, âge, origine, alimentation)
};
#endif 

