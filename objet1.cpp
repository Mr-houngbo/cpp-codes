#include<iostream>
#include<string>
using namespace std;

class Personnage
{
	public:
		Personnage(): age(0),numero(0)
		{

		}
		void remplissage(Personnage x)
		{
				cout<<" Entrez votre nom :";
				cin>> nom;
				cout<< " Entrez votre prénom :";
				cin>>prenom;
				cout<<" Entrez votre sex :";
				cin>> sex;
				cout<<" Quel est votre âge: ";
				cin>> age;
				cout<<" Lieu de naissance :";
				cin>> lieu_de_naissance;
				cout<< "Entrez numéro de téléphone :";
				cin>> numero;
		}
		
		void afficher(Personnage x) const
		{
				cout<<" Nom: "<< nom<< endl;
				cout<<" Prénom: "<< prenom<< endl;
				cout<<" Sex : "<< sex<< endl;
				cout<<" Âge: "<< age << endl;
				cout<< " Numéro de téléphone:" << numero <<endl;
				cout<< " Lieu de naissance :" << lieu_de_naissance <<endl<<endl<<endl;
		}
		void manger()
		{

		}
		void tostring()
		{

		}

		void dormir()
		{

		}

		/*mutateur*/
		void setnom(std::string nom)
		{

		}
		void setprenom(std::string prenom)
		{

		}
		void setage(int age)
		{

		}
		void setlieu_de_Naissance (std::string lieu_de_naissance)
		{

		}
		void setsex(std::string sex)
		{

		}
		void setnumero( int numero)
		{

		}

		//Accesseur
		std::string getnom()
		{
			return nom;
		}
		std::string getprenom()
		{
			return prenom;
		}
		int getage()
		{
			return age;
		}
		std::string getlieu_de_Naissance()
		{
			return lieu_de_naissance;
		}
		int getnumero()
		{
			return numero;
		}
		std::string getsex()
		{
			return sex;
		}

	private:
		int age;
		std::string nom;
		std::string prenom;
		std::string sex;
		std::string lieu_de_naissance;
		int numero;


};

int main()
{
	cout<< " Bienvenu dans mon programme de recensement "<< endl;
	cout<< "Aller top c'est parti 🤸🤸🤸🤸"<< endl;
	Personnage X;
	cout<<" Création d'une instance Personnage par le constructeur par défaut "<< endl;
	X.remplissage(X);
	X.afficher(X);
}