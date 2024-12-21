#ifndef ANIMAL_H      // Empêche les inclusions multiples du fichier
#define ANIMAL_H
#include <string>     // Inclusion pour utiliser string
#include <iostream>   // Inclusion pour cout et endl
using namespace std;
class Animal {
private:
    string nom;  // Le nom de l'animal
    int age;     // L'âge de l'animal 
    float poids; // Le poids de l'animal
public:
    // Constructeur par défaut
    Animal();
    // Constructeur paramétré
    Animal(const std::string& nom, int age, float poids);
    // Getter pour le nom
    string getNom() const;
    // Setter pour le nom
    void setNom(const string& nouveauNom);
    // Getter pour l'âge
    int getAge() const;
    // Setter pour l'âge
    void setAge(int nouvelAge);
    // Getter pour le poids 
    float getPoids() const;
    // Setter pour le poids )
    void setPoids(float nouveauPoids);
    // Méthode d'affichage
    void afficher() const;
    // Destructeur
    ~Animal();
};
#endif 

