#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <string>
class Etudiant
{
    public:
        //zone des attributs
        std::string nom;
        string prenom;
        int age;
        string sexe;
        string lieuNaissance;
        int numero;
        string universite;
        string faculte;
        string filiere;
        int anneeEtude;
        int numeroMatricule;
        string addresseEmail;
        Etudiant();
        Etudiant(const Etudiant& other);
        ~Etudiant();
};

#endif // ETUDIANT_H
