#include "Enclos.h"
#include <iostream>
using namespace std;
// Ajouter un animal à l'enclos
void Enclos::ajouterAnimal(const Animal& animal) {
    animaux.push_back(animal);  // Ajoute un animal au vecteur
    cout << "Animal ajoute avec succes !" << endl;
}
// Retirer un animal par indice
void Enclos::retirerAnimal(int index) {
    if (index >= 0 && index < animaux.size()) {
        cout << "Retrait de l'animal suivant : ";
        animaux[index].afficher();
        animaux.erase(animaux.begin() + index); // Supprime l'animal du vecteur
        cout << "L'animal a ete retire avec succes.\n";
    } else {
        cout << "Indice invalide. Aucun animal retire.\n";
    }
}
// Accéder à un animal par indice (opérateur [])
Animal& Enclos::operator[](int index) {
    return animaux.at(index);  // Utilise at() pour éviter un accès invalide
}
// Obtenir le nombre d'animaux dans l'enclos
int Enclos::getNombreAnimaux() const {
    return animaux.size();  // Retourne la taille du vecteur
}
// Afficher les informations des animaux dans l'enclos
void Enclos::afficherAnimaux() const {
    if (animaux.empty()) {
        cout << "L'enclos est vide.\n";
    } else {
        cout << "Animaux dans l'enclos :\n";
        for (size_t i = 0; i < animaux.size(); ++i) {
            cout << "Indice " << i << " : ";
            animaux[i].afficher();
        }
    }
}
