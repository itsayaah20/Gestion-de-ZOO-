#include "Directeur.h"
#include <string>
#include <iostream>
using namespace std; 
Directeur::Directeur(const string& nom, int age, const string& ville) : nom(nom), age(age), ville(ville) {}
std::string Directeur::getNom() const {
    return nom;
}
int Directeur::getAge() const {
    return age;
}

string Directeur::getVille() const {
    return ville;
}

void Directeur::setNom(const string& nouveauNom) {
    nom = nouveauNom;
}

void Directeur::setAge(int nouvelAge) {
    age = nouvelAge;
}

void Directeur::setVille(const string& nouvelleVille) {
    ville = nouvelleVille;
}

void Directeur::afficher() const {
    cout << "Directeur: " << nom << ", Age: " << age << ", Ville: " << ville << endl;
}
