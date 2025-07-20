#ifndef __CLASS__
#define __CLASS__




#include <iostream>
#include <string>


/************************** Classes  *************************************************/

/************************** Etudiant  *************************************************/
class Etudiant
{

	public:
	// Zone des attributs(ou données membres) de ma classe
		std::string nom,prenom,sexe,lieuDeNaissance,universite,faculte,filiere,adresseEmail;
		int age,anneeEtude;
		long int numero,numeroMatricule;
	// Zone des Fonctionnalités(ou méthodes) de ma classe
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
class Enseignant
{
	public:
	// Zone des attributs(ou données membres) de ma classe
		std::string nom,prenom,sexe,lieuDeNaissance,specialite,matieres,emploiDuTemps;
		int age;
		long int numero;
	// Zone des Fonctionnalités(ou méthodes) de ma classe
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
class Administratif
{
	public:
	// Zone des attributs(ou données membres) de ma classe
		std::string nom,prenom,sexe,lieuDeNaissance,qualifications,taches,poste,emploiDuTemps;
		int age;
		long int numero;
	// Zone des Fonctionnalités(ou méthodes) de ma classe
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
class Technicien
{
	public:
	// Zone des attributs(ou données membres) de ma classe
		std::string nom,prenom,sexe,lieuDeNaissance,qualifications,emploiDuTemps;
		int age;
		long int numero;
	// Zone des Fonctionnalités(ou méthodes) de ma classe
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
/************************** Personne  *************************************************/
class Personne
{
	public:
	// Zone des attributs(ou données membres) de ma classe
		std::string nom,prenom,sexe,lieuDeNaissance;
		int age;
		long int numero;
	// Zone des Fonctionnalités(ou méthodes) de ma classe
		Personne();
		Personne(std::string nom,std::string prenom,std::string sexe,std::string lieuDeNaissance,int age,long int numero);
		Personne(Personne const& autre);
		void manger();
		void afficher() const;
		void toString();
		void dormir();
		~Personne();
	
};

#endif
