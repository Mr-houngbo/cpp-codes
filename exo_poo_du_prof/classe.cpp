#include "classe.h"
using namespace std;

/***************************************Methodes *****************************************/
Personne::Personne() : nom(""),prenom(""),sexe(""),lieuDeNaissance(""),age(-1),numero(-1)
{
}
Personne::Personne(string nom,string prenom,string sexe,string lieuDeNaissance,int age,long int numero)
{
	this->nom=nom;
	this->prenom=prenom;
	this->sexe=sexe;
	this->lieuDeNaissance=lieuDeNaissance;
	this->age=age;
	this->numero=numero;
}
Personne::Personne(Personne const& autre)
{
	nom=autre.nom;
	prenom=autre.prenom;
	sexe=autre.sexe;
	lieuDeNaissance=autre.lieuDeNaissance;
	age=autre.age;
	numero=autre.numero;
}
Personne::~Personne()
{	
	
}













Etudiant::Etudiant(): nom(" "),prenom(" "),age(0),sexe(" "),lieuDeNaissance(" "),numero(0),universite(" "),faculte(" "),
	filiere(" "),anneeEtude(0),numeroMatricule(0),adresseEmail(" ")
{
	i++;
	cout<<"Création de la "<<i<<" eme instance d’Etudiant par le constructeur par défaut."<<endl;
}
Etudiant::Etudiant(Etudiant const& autre): nom(autre.nom),prenom(autre.prenom),age(autre.age),sexe(autre.sexe),
	lieuDeNaissance(autre.lieuDeNaissance),numero(autre.numero),universite(autre.universite),faculte(autre.faculte),
	filiere(autre.filiere),anneeEtude(autre.anneeEtude),numeroMatricule(autre.numeroMatricule),
	adresseEmail(autre.adresseEmail)
{
	i++;
	cout<<"Création de la "<<i<<" eme instance d’Etudiant par le constructeur par copie."<<endl;
}
Etudiant::Etudiant(string m_nom,string m_prenom,int m_age,string m_sexe,string m_lieuDeNaissance,long int m_numero,
			string m_universite,string m_faculte,string m_filiere,int m_anneeEtude,long int m_numeroMatricule,
			string m_adresseEmail)
{
	nom=m_nom;
	prenom=m_prenom;
	age=m_age;
	sexe=m_sexe;
	lieuDeNaissance=m_lieuDeNaissance;
	numero=m_numero;
	universite=m_universite;
	faculte=m_faculte;
	filiere=m_filiere;
	anneeEtude=m_anneeEtude;
	numeroMatricule=m_numeroMatricule;
	adresseEmail=m_adresseEmail;
	i=i+1;
	cout<<"Création de la "<<i<<" eme instance d’Etudiant par le constructeur avec parametres specifiques."<<endl;
}
void Etudiant::manger()
{

}
void Etudiant::afficher() const
{

	cout<<"Informations Etudiant"<<endl;
	cout<<"\tNom : "<<nom<<endl;
	cout<<"\tPrenom : "<<prenom<<endl;
	cout<<"\tAge : "<<age<<endl;
	cout<<"\tSexe : "<<sexe<<endl;
	cout<<"\tLieu de naissance : "<<lieuDeNaissance<<endl;
	cout<<"\tNumero  : "<<numero<<endl;
	cout<<"\tUniversite : "<<universite<<endl;
	cout<<"\tFaculte : "<<faculte<<endl;
	cout<<"\tFiliere : "<<filiere<<endl;
	cout<<"\tAnnee d'etude : "<<anneeEtude<<endl;
	cout<<"\tNumero Matricule : "<<numeroMatricule<<endl;
	cout<<"\tAdresse email : "<<adresseEmail<<endl;
	
}
void Etudiant::toString()
{

}
void Etudiant::dormir()
{

}
void Etudiant::etudier()
{

}
void Etudiant::seFaireEvaluer()
{

}
void Etudiant::seDistraire()
{

}
Etudiant::~Etudiant()
{
	cout<<"Destruction d’une instance d’Etudiant."<<endl;
}

/**********************************************************************************************************/

Enseignant::Enseignant():nom(" "),prenom(" "),age(0),sexe(" "),lieuDeNaissance(" "),numero(0),specialite(" "),matieres(" "),
	emploiDuTemps(" ")
{
		cout<<"Création d’une instance d'Enseignant par le constructeur par defaut ."<<endl;
}
Enseignant::Enseignant(std::string m_nom,std::string m_prenom,int m_age,std::string m_sexe,std::string m_lieuDeNaissance,long int m_numero,std::string m_specialite,
			std::string m_matieres,std::string m_emploiDuTemps)
{
	nom=m_nom;
	prenom=m_prenom;
	age=m_age;
	sexe=m_sexe;
	lieuDeNaissance=m_lieuDeNaissance;
	numero=m_numero;
	specialite=m_specialite;
	matieres=m_matieres;
	emploiDuTemps=m_emploiDuTemps;
	cout<<"Création d’une instance d'Enseignant par le constructeur avec parametres specifiques."<<endl;
}
Enseignant::Enseignant(Enseignant const& autre): nom(autre.nom),prenom(autre.prenom),age(autre.age),sexe(autre.sexe),
	lieuDeNaissance(autre.lieuDeNaissance),numero(autre.numero),specialite(autre.specialite),matieres(autre.matieres),
	emploiDuTemps(autre.emploiDuTemps)
{
	cout<<"Création d’une instance d'Enseignant par le constructeur par copie."<<endl;
}
void Enseignant::manger()
{

}
void Enseignant::afficher() const
{
	
	cout<<"Informations Enseignant"<<endl;
	cout<<"\tNom : "<<nom<<endl;
	cout<<"\tPrenom : "<<prenom<<endl;
	cout<<"\tAge : "<<age<<endl;
	cout<<"\tSexe : "<<sexe<<endl;
	cout<<"\tLieu de naissance : "<<lieuDeNaissance<<endl;
	cout<<"\tNumero  : "<<numero<<endl;
	cout<<"\tSpecialite : "<<specialite<<endl;
	cout<<"\tMatieres : "<<matieres<<endl;
	cout<<"\tEmploi du temps : "<<emploiDuTemps<<endl;
	
}
void Enseignant::toString()
{

}
void Enseignant::dormir()
{

}
void Enseignant::enseigner()
{

}
void Enseignant::conseiller()
{

}
void Enseignant::orienter()
{

}
void Enseignant::evaluer()
{

}
Enseignant::~Enseignant()
{
	cout<<"Destruction d’une instance d'Enseignant."<<endl;
}

/**********************************************************************************************************/

Administratif::Administratif():nom(" "),prenom(" "),age(0),sexe(" "),lieuDeNaissance(" "),numero(0),qualifications(" "),
	taches(" "),poste(" "),emploiDuTemps(" ")
{
		cout<<"Création d’une instance d'Administratif par le constructeur par defaut ."<<endl;
}
Administratif::Administratif(std::string m_nom,std::string m_prenom,int m_age,std::string m_sexe,std::string m_lieuDeNaissance,
		long int m_numero,std::string m_qualifications,std::string m_taches,std::string m_poste,std::string m_emploiDuTemps)
{
	nom=m_nom;
	prenom=m_prenom;
	age=m_age;
	sexe=m_sexe;
	lieuDeNaissance=m_lieuDeNaissance;
	numero=m_numero;
	poste=m_poste;
	taches=m_taches;
	qualifications=m_qualifications;
	emploiDuTemps=m_emploiDuTemps;
	cout<<"Création d’une instance d'Administratif par le constructeur avec parametres specifiques."<<endl;
}
Administratif::Administratif(Administratif const& autre): nom(autre.nom),prenom(autre.prenom),age(autre.age),
	sexe(autre.sexe),lieuDeNaissance(autre.lieuDeNaissance),numero(autre.numero),qualifications(autre.qualifications),
	poste(autre.poste),taches(autre.taches),emploiDuTemps(autre.emploiDuTemps)
{
	cout<<"Création d’une instance d'Administratif par le constructeur par copie."<<endl;
}
void Administratif::manger()
{

}
void Administratif::afficher() const
{
	
	cout<<"Informations Administratif"<<endl;
	cout<<"\tNom : "<<nom<<endl;
	cout<<"\tPrenom : "<<prenom<<endl;
	cout<<"\tAge : "<<age<<endl;
	cout<<"\tSexe : "<<sexe<<endl;
	cout<<"\tLieu de naissance : "<<lieuDeNaissance<<endl;
	cout<<"\tNumero  : "<<numero<<endl;
	cout<<"\tPoste : "<<poste<<endl;
	cout<<"\tTaches  : "<<taches<<endl;
	cout<<"\tQualifications : "<<qualifications<<endl;
	cout<<"\t Emploi du temps : "<<emploiDuTemps<<endl;
	
}
void Administratif::toString()
{

}
void Administratif::dormir()
{

}
void Administratif::conseiller()
{

}
void Administratif::realiserTaches()
{

}
Administratif::~Administratif()
{
	cout<<"Destruction d’une instance d'Administratif."<<endl;
}

/**********************************************************************************************************/

Technicien::Technicien():nom(" "),prenom(" "),age(0),sexe(" "),lieuDeNaissance(" "),numero(0),qualifications(" "),
	emploiDuTemps(" ")
{
		cout<<"Création d’une instance de Technicien par le constructeur par defaut ."<<endl;
}
Technicien::Technicien(std::string m_nom,std::string m_prenom,int m_age,std::string m_sexe,std::string m_lieuDeNaissance,long int m_numero,
		std::string m_qualifications,std::string m_emploiDuTemps)
{
	nom=m_nom;
	prenom=m_prenom;
	age=m_age;
	sexe=m_sexe;
	lieuDeNaissance=m_lieuDeNaissance;
	numero=m_numero;
	qualifications=m_qualifications;
	emploiDuTemps=m_emploiDuTemps;
	cout<<"Création d’une instance de Technicien par le constructeur avec parametres specifiques."<<endl;
}
Technicien::Technicien(Technicien const& autre):nom(autre.nom),prenom(autre.prenom),age(autre.age),
	sexe(autre.sexe),lieuDeNaissance(autre.lieuDeNaissance),numero(autre.numero),qualifications(autre.qualifications),
	emploiDuTemps(autre.emploiDuTemps)
{
	cout<<"Création d’une instance de Technicien par le constructeur par copie."<<endl;
}
void Technicien::manger()
{

}
void Technicien::afficher() const
{
	
	cout<<"Informations Technicien"<<endl;
	cout<<"\tNom : "<<nom<<endl;
	cout<<"\tPrenom : "<<prenom<<endl;
	cout<<"\tAge : "<<age<<endl;
	cout<<"\tSexe : "<<sexe<<endl;
	cout<<"\tLieu de naissance : "<<lieuDeNaissance<<endl;
	cout<<"\tQualifications : "<<qualifications<<endl;
	cout<<"\tEmploi du temps : "<<emploiDuTemps<<endl;
}
void Technicien::toString()
{

}
void Technicien::dormir()
{

}
void Technicien::realiserTaches(std::string taches)
{

}
Technicien::~Technicien()
{
	cout<<"Destruction d’une instance de Technicien."<<endl;
}

/************************** Main  *************************************************/

int main(int argc, char const *argv[])
{
	// Allocation statique par invoccation d’un constructeur
	Etudiant objetStatique("HOUNGBO","raoul",19,"M","Benin",20213132,"Abomey-calavi","FAST","MIA",2023,10111213,"raoul@calixte");
	cout<<" Utilisation directe de la variable de l’objet dans le programme :\n";
	cout<<" \tVotre boîte contient"<<objetStatique.nom <<endl;
	cout<<" Appel de la fonction affiche() :\n \t " ;
	objetStatique.afficher();
	Etudiant objetStatiqueParDefaut; // Définit sans donner de valeur
	cout<<" Valeur de l’objetStatiqueParDefaut:\n";
	cout<<"\tVotre boîte contient "<<objetStatiqueParDefaut.nom<<endl;
	// Allocation dynamique par utilisation de l’opérateur new
	// Etape 1-déclaration du pointeur
	Etudiant*objetDynamique;
	// Etape 2-Initialisation du pointeur + Invoccation constructeur
	objetDynamique = new Etudiant("HOUNGBO","raoul",19,"M","Benin",20213132,"Abomey-calavi","FAST","MIA",2023,10111213,"raoul@calixte");
	// Etape 3-Utilisation
	cout<<"Valeur de l’objetDynamique :\n";
	objetDynamique->afficher();
	// Etape 4-suppression de l’objet crée
	delete objetDynamique;

	// Allocation statique par invoccation d’un constructeur
	Enseignant objetStatique0("HOUNGBO","raoul",19,"M","Benin",20213132,"Analyse","Analyse 3","Lundi");
	cout<<" Utilisation directe de la variable de l’objet dans le programme :\n";
	cout<<" \tVotre boîte contient"<<objetStatique0.nom <<endl;
	cout<<" Appel de la fonction affiche() :\n \t " ;
	objetStatique0.afficher();
	Enseignant objetStatiqueParDefaut0; // Définit sans donner de valeur
	cout<<" Valeur de l’objetStatiqueParDefaut:\n";
	cout<<"\tVotre boîte contient "<<objetStatiqueParDefaut0.nom<<endl;
	// Allocation dynamique par utilisation de l’opérateur new
	// Etape 1-déclaration du pointeur
	Enseignant*objetDynamique0;
	// Etape 2-Initialisation du pointeur + Invoccation constructeur
	objetDynamique0 = new Enseignant("HOUNGBO","raoul",19,"M","Benin",20213132,"Analyse","Analyse 3","Lundi");
	// Etape 3-Utilisation
	cout<<"Valeur de l’objetDynamique :\n";
	objetDynamique0->afficher();
	// Etape 4-suppression de l’objet crée
	delete objetDynamique0;


	// Allocation statique par invoccation d’un constructeur
	Administratif objetStatique1("HOUNGBO","raoul",19,"M","Benin",20213132,"PDG","Niveau expert","Diriger","Mardi");
	cout<<" Utilisation directe de la variable de l’objet dans le programme :\n";
	cout<<" \tVotre boîte contient"<<objetStatique1.nom <<endl;
	cout<<" Appel de la fonction affiche() :\n \t " ;
	objetStatique1.afficher();
	Administratif objetStatiqueParDefaut1; // Définit sans donner de valeur
	cout<<" Valeur de l’objetStatiqueParDefaut:\n";
	cout<<"\tVotre boîte contient "<<objetStatiqueParDefaut1.nom<<endl;
	// Allocation dynamique par utilisation de l’opérateur new
	// Etape 1-déclaration du pointeur
	Administratif*objetDynamique1;
	// Etape 2-Initialisation du pointeur + Invoccation constructeur
	objetDynamique1 = new Administratif("HOUNGBO","raoul",19,"M","Benin",20213132,"PDG","Niveau expert","Diriger","Mardi");
	// Etape 3-Utilisation
	cout<<"Valeur de l’objetDynamique :\n";
	objetDynamique1->afficher();
	// Etape 4-suppression de l’objet crée
	delete objetDynamique1;


	// Allocation statique par invoccation d’un constructeur
	Technicien objetStatique2("HOUNGBO","raoul",19,"M","Benin",20213132,"Niveau moyen","Mercredi-soir");
	cout<<" Utilisation directe de la variable de l’objet dans le programme :\n";
	cout<<" \tVotre boîte contient"<<objetStatique2.nom <<endl;
	cout<<" Appel de la fonction affiche() :\n \t " ;
	objetStatique2.afficher();
	Technicien objetStatiqueParDefaut2; // Définit sans donner de valeur
	cout<<" Valeur de l’objetStatiqueParDefaut:\n";
	cout<<"\tVotre boîte contient "<<objetStatiqueParDefaut2.nom<<endl;
	// Allocation dynamique par utilisation de l’opérateur new
	// Etape 1-déclaration du pointeur
	Technicien*objetDynamique2;
	// Etape 2-Initialisation du pointeur + Invoccation constructeur
	objetDynamique2 = new Technicien("HOUNGBO","raoul",19,"M","Benin",20213132,"Niveau moyen","Mercredi-soir");
	// Etape 3-Utilisation
	cout<<"Valeur de l’objetDynamique :\n";
	objetDynamique2->afficher();
	// Etape 4-suppression de l’objet crée
	delete objetDynamique2;

	return 0;
}
