#ifndef __Personnage__
#define __Personnage__
#include <string>

class Personnage
{
    // Méthodes
    public:
        Personnage(); //Constructeur
        Personnage(std::string nomArme, int degatsArme);
        Personnage(Personnage const& autre);
        ~Personnage();
        void recevoirDegats(int nbDegats);
        void attaquer(Personnage &cible);
        void boirePotionDeVie(int quantitePotion);
        void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
        bool estVivant() const;
    // Attributs
    private:
        int m_vie;
        int m_mana;
        std::string m_nomArme;
        int m_degatsArme;
};









#endif