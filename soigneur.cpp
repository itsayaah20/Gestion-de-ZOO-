#include "soigneur.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Constructeur qui initialise les variables membres
Soigneur::Soigneur(const string& nom, int age, int experience) 
    : nom(nom), age(age), experience(experience) {
    // Initialise les attributs avec les valeurs pass�es en param�tres
}
// M�thode pour ajouter une comp�tence au vecteur
void Soigneur::ajouterCompetence(const string& competence) {
    competences.push_back(competence);
}

// M�thode pour afficher les informations du soigneur
void Soigneur::afficher() const {
    cout << "Soigneur: " << nom 
         << ", Age: " << age 
         << ", Experience: " << experience << " ans, Competences: ";

    // Parcourir et afficher les comp�tences
    for (size_t i = 0; i < competences.size(); ++i) {
        cout << competences[i];
        if (i < competences.size() - 1) {
            cout << ", "; // Ajouter une virgule entre les comp�tences
        }
    }

    // Si aucune comp�tence
    if (competences.empty()) {
        cout << "Aucune";
    }

    cout << endl;
}

