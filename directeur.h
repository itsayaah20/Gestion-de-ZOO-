#ifndef DIRECTEUR_H
#define DIRECTEUR_H
#include <string>
#include <iostream>
using namespace std; 
class Directeur {
private:
    string nom;
    int age;
    string ville;

public:
    Directeur(const string& nom, int age, const string& ville);
    string getNom() const;
    int getAge() const;
    string getVille() const;
    void setNom(const string& nouveauNom);
    void setAge(int nouvelAge);
    void setVille(const string& nouvelleVille);
    void afficher() const;
};

#endif 
