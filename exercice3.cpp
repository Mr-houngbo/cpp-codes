#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
 int note(0),i(0),note1(0),max(0),min(0),c(0),d(0);
 do
  {
   cout<<"donnez une note (-1 pour finir )";
   cin>>note;
   cout<<endl;
   if((i>0)&&(note!=-1))
    {
     if(i<=1)
      {
       max=note;
       min=note;
      }
     if(note1>=max)
      {
       max=note1;
      }
     if(note1<=min)
      {
       min=note1;
      }
    }
   note1=note;
   i++;
   c=0;
   d=0;
  }while(note!=-1);
 cout<<"note maximale :"<<max<<" attribuee "<<c<<" fois"<<endl;
 cout<<"note minimale :"<<min<<" attribuee "<<d<<" fois"<<endl;
 return 0;
}
