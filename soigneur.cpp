#include "soigneur.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Constructeur qui initialise les variables membres
Soigneur::Soigneur(const string& nom, int age, int experience) 
    : nom(nom), age(age), experience(experience) {
    // Initialise les attributs avec les valeurs passées en paramètres
}
// Méthode pour ajouter une compétence au vecteur
void Soigneur::ajouterCompetence(const string& competence) {
    competences.push_back(competence);
}

// Méthode pour afficher les informations du soigneur
void Soigneur::afficher() const {
    cout << "Soigneur: " << nom 
         << ", Age: " << age 
         << ", Experience: " << experience << " ans, Competences: ";

    // Parcourir et afficher les compétences
    for (size_t i = 0; i < competences.size(); ++i) {
        cout << competences[i];
        if (i < competences.size() - 1) {
            cout << ", "; // Ajouter une virgule entre les compétences
        }
    }

    // Si aucune compétence
    if (competences.empty()) {
        cout << "Aucune";
    }

    cout << endl;
}

