#include "poo1.h"
using namespace std;
	// Méthodes
	void Personnage::recevoirDegats(int nbDegats)
	{
		m_vie -= nbDegats;
		if (m_vie<0)
		{
			m_vie=0;
		}
	}
	void Personnage::attaquer(Personnage &cible)
	{
		cible.recevoirDegats(m_degatsArme);
	}
	void Personnage::boirePotionDeVie(int quantitePotion)
	{
		m_vie+=quantitePotion;
		if(m_vie>100)
		{
		m_vie=100;
		}
	}
	void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
	{
		m_nomArme = nomNouvelleArme;
		m_degatsArme = degatsNouvelleArme;
	}
	bool Personnage::estVivant()
	{
		return m_vie>0;
	}

	Personnage::Personnage()
	{
		m_vie=100;
		m_mana=100;
		m_nomArme="Épée rouillée";
		m_degatsArme=10;
	}
	Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100),m_mana(100),m_nomArme(nomArme), m_degatsArme(degatsArme)
	{
	}



int main()
{

Personnage goliath("Épée aiguisée",20),david(goliath);
goliath.attaquer(david);
david.boirePotionDeVie(20);
goliath.attaquer(david);
david.attaquer(goliath);
goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
goliath.attaquer(david);


return 0;
}