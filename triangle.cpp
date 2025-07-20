#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
 cout<<"Bonjour tres cher visiteur "<<endl<<"Comment allez vous ? "<<endl<<"Je me presente , moi c'est R.H."<<endl;
 cout<<"Entrez la hauteur du triangle rectangle que vous desirez obtenir ! "<<endl;
 int hauteur(0),j(0);
 cin>>hauteur;
 for(int i(0);i<hauteur;i++)
 { 
  for(j=0;j<=i;j++)
    cout<<"~";
  cout<<endl;
 }
 return 0;
}
