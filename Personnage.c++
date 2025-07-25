#include "Personnage.h"

void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;
    //On enlève le nombre de dégâts reçus à la vie du personnage
    if(m_vie < 0) //Pour éviter d'avoir une vie négative
    {
        m_vie = 0; //On met la vie à 0 (cela veut dire mort)
    }
}
void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_degatsArme);
    //On inflige à la cible les dégâts que cause notre arme
}
void Personnage::boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;
    if (m_vie > 100) //Interdiction de dépasser 100 de vie
    {
    m_vie = 100;
    }
}
void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme)
{
    m_nomArme = nomNouvelleArme;
    m_degatsArme = degatsNouvelleArme;
}
bool Personnage::estVivant() const
{
    return m_vie > 0;//Renvoie true is m_vie > 0 et false sinon.
}
Personnage::Personnage()
{
    m_vie = 100;
    m_mana = 100;
    m_nomArme = "Épée rouillée";
    m_degatsArme = 10;
}
Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100),m_mana(100),m_nomArme(nomArme), m_degatsArme(degatsArme)
{

}
Personnage::Personnage(Personnage const& autre): m_vie(autre.m_vie),m_mana(autre.m_mana), m_nomArme(autre.m_nomArme),m_degatsArme(autre.m_degatsArme)
{
}
Personnage::~Personnage()
{
    /* Rien à mettre ici car on ne fait pas d'allocation dynamique
    dans la classe Personnage. Le destructeur est donc inutile mais
    je le mets pour montrer à quoi cela ressemble.
    En temps normal, un destructeur fait souvent des delete et quelques
    autres vérifications si nécessaire avant la destruction de l'objet.
    */
}