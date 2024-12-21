#ifndef ANIMAL_H      // Emp�che les inclusions multiples du fichier
#define ANIMAL_H
#include <string>     // Inclusion pour utiliser string
#include <iostream>   // Inclusion pour cout et endl
using namespace std;
class Animal {
private:
    string nom;  // Le nom de l'animal
    int age;     // L'�ge de l'animal 
    float poids; // Le poids de l'animal
public:
    // Constructeur par d�faut
    Animal();
    // Constructeur param�tr�
    Animal(const std::string& nom, int age, float poids);
    // Getter pour le nom
    string getNom() const;
    // Setter pour le nom
    void setNom(const string& nouveauNom);
    // Getter pour l'�ge
    int getAge() const;
    // Setter pour l'�ge
    void setAge(int nouvelAge);
    // Getter pour le poids 
    float getPoids() const;
    // Setter pour le poids )
    void setPoids(float nouveauPoids);
    // M�thode d'affichage
    void afficher() const;
    // Destructeur
    ~Animal();
};
#endif 

