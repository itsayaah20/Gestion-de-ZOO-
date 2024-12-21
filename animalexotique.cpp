#include "AnimalExotique.h"  // Inclusion de l'en-t�te de la classe
#include <iostream>
#include <string>
using namespace std;
// Constructeur : Initialise les attributs de la classe d�riv�e et appelle le constructeur de la classe de base Animal
// Constructeur d'AnimalExotique
AnimalExotique::AnimalExotique(const string& nom, int age, const string& origine, const string& alimentation)
    : Animal(nom, age, 0.0f),   // 0.0f est une valeur par d�faut pour le float
      origine(origine),   // Initialisation de l'attribut origine
      alimentation(alimentation) {}  // Initialisation de l'attribut alimentation
// Getter pour l'attribut origine
string AnimalExotique::getOrigine() const {
    return origine;  // Retourne la valeur actuelle de l'origine
}
// Getter pour l'attribut alimentation
string AnimalExotique::getAlimentation() const {
    return alimentation;  // Retourne la valeur actuelle de l'alimentation
}
// Setter pour modifier l'attribut origine
void AnimalExotique::setOrigine(const string& nvOrigine) {
    origine = nvOrigine;  
}
// Setter pour modifier l'attribut alimentation
void AnimalExotique::setAlimentation(const string& nvAlimentation) {
    alimentation = nvAlimentation;  
}

// M�thode d'affichage : Affiche les informations de l'animal exotique
void AnimalExotique::afficher() const {
    Animal::afficher();  // Appelle la m�thode afficher() de la classe de base Animal
    cout << "Origine: " << origine << ", Alimentation: " << alimentation << endl;
}
// Destructeur de la classe Animal (d�finition redondante si d�j� virtuel dans la classe de base)
Animal::~Animal() {
   
}
