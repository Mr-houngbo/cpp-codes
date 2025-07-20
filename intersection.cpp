#include<iostream>
using namespace std;
int min(int l,int m)
{
	if(l<m)
		return l;
	else if(l==m)
		return l;
	else
		return m;
}
int main( )
{
	system("clear");
	int A(0),B(0),C(0),D(0),k(0);
	do
	{
		cout<<"Entrez les bornes A,B de l'intervalle entier [|A,B|] "<<endl;
		cout<<"A= ";
		cin>>A;
		cout<<endl;
		cout<<"B= ";
		cin>>B;
		if(A>=B)
			{
				system("clear");
				cout<<"Veuillez bien entrer les bornes de intervalle i.e A<B "<<endl;
			}
	}while(A>=B);	
	system("clear");
	do
	{
		cout<<"Entrez les bornes C,D de l'intervalle entier [|C,D|] "<<endl;
		cout<<"C= ";
		cin>>C;
		cout<<endl;
		cout<<"D= ";
		cin>>D;
		if(C>=D)
			{
				system("clear");
				cout<<"Veuillez bien entrer les bornes de intervalle i.e C<D "<<endl;
			}
	}while(C>=D);
  system("clear");
	int longueur1(B-A+1),longueur2(D-C+1),tab1[longueur1],tab2[longueur2],tab3[min(longueur1,longueur2)];
	for(int i(A),j(0);i<=B,j<longueur1;i++,j++)
		{
			tab1[j]=i;
		}
	for(int i(C),j(0);i<=D,j<longueur2;i++,j++)
		{
			tab2[j]=i;
		}
	for(int i(0);i<longueur1;i++)
		{
			for(int j(0);j<longueur2;j++)
				{
					if(tab1[i]==tab2[j])
						{
							tab3[k]=tab1[i];
							k++;
						}
				}
		}
	if(k==0)
		cout<<"L'intersection de [|"<<A<<","<<B<<"|] et [|"<<C<<","<<D<<"|] est vide."<<endl;
	else if(k==1)
		cout<<"L'intersection de [|"<<A<<","<<B<<"|] et [|"<<C<<","<<D<<"|] est "<<tab3[0]<<endl;
	else
		cout<<"L'intersection de [|"<<A<<","<<B<<"|] et [|"<<C<<","<<D<<"|] est [|"<<tab3[0]<<","<<tab3[k-1]<<"|]"<<endl;
	return 0;
}
