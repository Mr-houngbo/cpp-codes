#include <iostream>
 using namespace std;
 // Dé claration de la classe Toto
 class Toto
 {
 public :
 int var ;
 /* Les constructeurs */
// Toto () { var = 0 ; }
// Toto ( int a ) { var = a ; }
 // Ré alisent d’un seul coups les deux constructeurs précé dents
 // Toto (int a=0) { var = a ; }
 // Avec utilisation d’une liste d’ initialisation des attributs :attr1 ( val1 ), attr2 ( val2 ), ... , attrn ( valn )
  Toto (int a=0) :var (a) {}
 void affiche () ;
 } ;

 // Dé finition des fonctions membres de la classe Toto
 inline void Toto :: affiche ()
 { cout <<" Votre boîte contient "<< var << endl ;}

 int main ()
 {
 // Allocation statique par invoccation d’un constructeur
 Toto objetStatique (1) ;
 cout<<" Utilisation directe de la variable de l’objet dans le programme :\n";
 cout<<"\tVotre boîte contient " << objetStatique . var<< endl ;
 cout<<"Appel de la fonction affiche () : \n\t";
 objetStatique.affiche();

 Toto objetStatiqueParDefaut; // Dé finit sans donner de valeur
 cout<<" Valeur de l’ objetStatiqueParDefaut :\n" ;
 cout<<" \tVotre boîte contient "<<objetStatiqueParDefaut . var<<endl ;

 // Allocation dynamique par utilisation de l’opé rateur new
 // Etape 1 - dé claration du pointeur
 Toto * objetDynamique ;
 // Etape 2 - Initialisation du pointeur + Invoccation constructeur
 objetDynamique = new Toto (2) ;
 // Etape 3 - Utilisation
 cout<<"Valeur de l’objetDynamique :\n";
 objetDynamique->affiche();
 // Etape 4 - suppression de l’objet crée
 delete objetDynamique ;
 return 0 ;
 }