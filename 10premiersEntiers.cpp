#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
 cout<<"Entrez l'entier "<<endl;
 int entier(0);
 cin>>entier;
 cout<<"Les 10 premiers entiers qui suivent "<<entier<<"sont : "<<endl;
 for(int i(1);i<=10;i++)
   cout<<entier+i<<endl; 
 return 0;
}
