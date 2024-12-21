#ifndef ENCLOS_H
#define ENCLOS_H
#include <vector>      //  la biblioth�que pour le conteneur vector
#include "Animal.h"    // Inclusion de la classe Animal
using namespace std;
// D�claration de la classe Enclos
class Enclos {
private:
    vector<Animal> animaux;  // Vecteur est tableaux dynamique pour stocker les objets Animal
public:
    // pour ajouter un animal � l'enclos
    void ajouterAnimal(const Animal& animal);
    // pour retirer un animal par indice
    void retirerAnimal(int index);
    
    // Surcharge de l'op�rateur [] pour acc�der � un animal par son indice
    Animal& operator[](int index);
    
    //  obtenir le nombre total d'animaux 
    int getNombreAnimaux() const;
    
    //  pour afficher les informations des animaux qui sont stocker dans le tableaux 
    void afficherAnimaux() const;
};

#endif // ENCLOS_H

