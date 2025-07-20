#ifndef __CLASS__
#define __CLASS__




#include <iostream>
#include <string>

int i=0;
/************************** Classes  *************************************************/
class Personne
{
	private:
		std::string nom,prenom,sexe,lieuDeNaissance;
			int age;
			long int numero;
	public:
		Personne();
		Personne(std::string nom,std::string prenom,std::string sexe,std::string lieuDeNaissance,int age,long int numero);
		Personne(Personne const& autre);
		void manger();
		void afficher() const;
		void toString();
		void dormir();
		//Mutateur
		void setnom(std::string nom);
		void setprenom(std::string prenom);
		void setage(int age);
		void setlieuDeNaissance(std::string lieuDeNaissance);
		void setsexe(std::string sexe);
		void setnumero(int numero);
		//Accesseur ou getteur
		std::string getnom();
		std::string getprenom();
		int getage();
		long int getlieuDeNaissance();
		std::string getsexe();
		int getnumero();




		~Personne();
};
/************************** Etudiant  *************************************************/
class Etudiant : public Personne
{

	private:
		std::string nom,prenom,sexe,lieuDeNaissance,universite,faculte,filiere,adresseEmail;
		int age,anneeEtude;
		long int numero,numeroMatricule;
	public:
		Etudiant();
		Etudiant(Etudiant const& autre);
		Etudiant(std::string m_nom,std::string m_prenom,int m_age,std::string m_sexe,std::string m_lieuDeNaissance,long int m_numero,
			std::string m_universite,std::string m_faculte,std::string m_filiere,int m_anneeEtude,long int m_numeroMatricule,
			std::string m_adresseEmail);
		void manger();
		void afficher() const;
		void toString();
		void dormir();
		void etudier();
		void seFaireEvaluer();
		void seDistraire();
		~Etudiant();//destructeur
	
};
/************************** Enseignant  *************************************************/
class Enseignant : public Personne
{
	private:
		std::string nom,prenom,sexe,lieuDeNaissance,specialite,matieres,emploiDuTemps;
		int age;
		long int numero;
	public:
		Enseignant();
		Enseignant(std::string m_nom,std::string m_prenom,int m_age,std::string m_sexe,std::string m_lieuDeNaissance,long int m_numero,std::string m_specialite,
			std::string m_matieres,std::string m_emploiDuTemps);
		Enseignant(Enseignant const& autre);
		void manger();
		void afficher() const;
		void toString();
		void dormir();
		void enseigner();
		void conseiller();
		void orienter();
		void evaluer();
		~Enseignant();

};
/************************** Administratif  *************************************************/
class Administratif : public Personne
{
	private:
		std::string nom,prenom,sexe,lieuDeNaissance,qualifications,taches,poste,emploiDuTemps;
		int age;
		long int numero;
	public:
		Administratif();
		Administratif(std::string m_nom,std::string m_prenom,int m_age,std::string m_sexe,std::string m_lieuDeNaissance,
		long int m_numero,std::string m_qualifications,std::string m_taches,std::string m_poste,std::string m_emploiDuTemps);
		Administratif(Administratif const& autre);
		void manger();
		void afficher() const;
		void toString();
		void dormir();
		void conseiller();
		void realiserTaches();
		~Administratif();
	
};
/************************** Technicien  *************************************************/
class Technicien : public Personne
{
	private:
		std::string nom,prenom,sexe,lieuDeNaissance,qualifications,emploiDuTemps;
		int age;
		long int numero;
	public:
		Technicien();
		Technicien(std::string m_nom,std::string m_prenom,int m_age,std::string m_sexe,std::string m_lieuDeNaissance,long int m_numero,
		std::string m_qualifications,std::string m_emploiDuTemps);
		Technicien(Technicien const& autre);
		void manger();
		void afficher() const;
		void toString();
		void dormir();
		void realiserTaches(std::string taches);
		~Technicien();
	
};



#endif
