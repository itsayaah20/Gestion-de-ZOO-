#include "Visiteur.h"
using namespace std;
// Constructeur paramétré
Visiteur::Visiteur(const string& nom, const string& ville, int age)
    : nom(nom), ville(ville), age(age) {}
// Getter pour le nom
string Visiteur::getNom() const {
    return nom;
}
// Getter pour la ville
string Visiteur::getVille() const {
    return ville;
}
// Getter pour l'âge
int Visiteur::getAge() const {
    return age;
}
// Setter pour le nom
void Visiteur::setNom(const string& nouveauNom) {
    nom = nouveauNom;
}
// Setter pour la ville
void Visiteur::setVille(const string& nouvelleVille) {
    ville = nouvelleVille;
}
// Setter pour l'âge
void Visiteur::setAge(int nouvelAge) {
    if (nouvelAge >= 0) {
        age = nouvelAge;
    } else {
        cout << "Erreur : L'âge ne peut pas être négatif." << endl;
    }
}
// saisir les informations du visiteur
void Visiteur::saisirInfos() {
    cin.ignore(); // Nettoyer le buffer avant de commencer

    cout << "Entrez le nom du visiteur : ";
    getline(cin, nom);

    cout << "Entrez la ville du visiteur : ";
    getline(cin, ville);

    cout << "Entrez l'age du visiteur : ";
    while (!(cin >> age) || age < 0) { // Validation de la saisie numérique
        cout << "Erreur : Veuillez entrer un âge valide (nombre positif) : ";
        cin.clear();           // Effacer les erreurs
        cin.ignore(1000, '\n'); // Ignorer les caractères invalides
    }
    cin.ignore(); // Consommer le retour à la ligne restant
}
// Méthode pour afficher les informations du visiteur
void Visiteur::afficher() const {
    cout << "Visiteur : " << nom << endl;
    cout << endl ;
    cout << " Ville : " << ville << endl;
    cout << endl ;
    cout << " Age : " << age << " ans" << endl;
}

