#include "animal.h"
#include <iostream>
#include <string>
using namespace std;
// Constructeur paramétré
Animal::Animal(const string& nom, int age, float poids) : nom(nom), age(age), poids(poids) {}
// Getters
string Animal::getNom() const {
    return nom;
}

int Animal::getAge() const {
    return age;
}

float Animal::getPoids() const { // Retourne un float
    return poids;
}

// Setters
void Animal::setPoids(float nvPoids) { 
    poids = nvPoids;
}

void Animal::setNom(const string& nvNom) {
    nom = nvNom;
}

void Animal::setAge(int nvAge) {
    age = nvAge;
}
// Affichage
void Animal::afficher() const {
    cout << "Animal: " << nom << endl;
    cout << "Age: " << age << " ans" << endl;
    cout << "Poids: " << poids << " Kg" << endl;
}

