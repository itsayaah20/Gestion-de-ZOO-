#ifndef SOIGNEUR_H
#define SOIGNEUR_H
#include <string>
#include <vector>
using namespace std; 
class Soigneur {
private:
    string nom;
    int age;
    int experience;
    vector<string> competences;

public:
    Soigneur(const string& nom, int age, int experience);
    void ajouterCompetence(const string& competence);
    void afficher() const;
};

#endif

