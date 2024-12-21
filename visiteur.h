#ifndef VISITEUR_H
#define VISITEUR_H
#include <string>
#include <iostream>
using namespace std;
class Visiteur {
private:
    string nom;    // Nom du visiteur
    string ville;  // Ville du visiteur
    int age;            // Âge du visiteur

public:
    // Constructeur
    Visiteur(const std::string& nom = "", const std::string& ville = "", int age = 0);

    // Getters
    string getNom() const;
    string getVille() const;
    int getAge() const;

    // Setters
    void setNom(const string& nouveauNom);
    void setVille(const string& nouvelleVille);
    void setAge(int nouvelAge);

    // Nouvelle méthode pour saisir les informations du visiteur
    void saisirInfos();
    
	// Méthode pour afficher les informations du visiteur
    void afficher() const;
};

#endif // VISITEUR_H

