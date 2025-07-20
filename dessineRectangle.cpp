#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void dessineRectangle(int longueur,int largeur,char caractere)
{
 for(int i(0);i<largeur;i++)
  {
   for(int j(0);j<longueur;j++)
    {
      cout<<caractere;
    }
   cout<<endl;
  }
}
int main()
{
 cout<<"Entrez la longueur et la largeur du rectangle a construire  "<<endl;
 int longueur(0),largeur(0);
 cin>>longueur>>largeur;
 cout<<"Quel est le caractere a utiliser pour dessiner le rectangle ? "<<endl;
 char caractere;
 cin>>caractere;
 cout<<"Voici votre rectangle voulu "<<endl;
 dessineRectangle(longueur,largeur,caractere);
 cout<<"Programme realise par R.H."<<endl;

 return 0;
}
