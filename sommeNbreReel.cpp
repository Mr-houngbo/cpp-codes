#include<iostream>
#include<string>
#include<cmath>
#include "fichierHeader.cpp"
using namespace std;
int main()
{
 cout<<"Entrez les trois nombres reels"<<endl;
 float a(0),somme(0);
 for(int i(0);i<3;i++)
  {
   cin>>a;
   somme=somme+a;
  }
 cout<<"La somme de ces trois nombres reels est : "<<somme<<endl;
  int b(12),c(0);
 c=ajouteDeux(b);
 cout<<"Test de la fonction ajoute deux "<<endl<<c<<endl;
 return 0;
}
