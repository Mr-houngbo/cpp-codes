#ifndef __PERSONNAGE__
#define __PERSONNAGE__




#include <iostream>
#include <string>
class Personnage
{
	public:
	// Méthodes
	Personnage();
	Personnage(std::string nomArme, int degatsArme);
	void recevoirDegats(int nbDegats);
	void attaquer(Personnage &cible);
	void boirePotionDeVie(int quantitePotion);
	void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
	bool estVivant();
	private:
	// Attributs
	int m_vie;
	int m_mana;
	std::string m_nomArme;
	int m_degatsArme;

};



#endif