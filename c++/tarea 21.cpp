#include<iostream>
using namespace std;
main()
{
      float c,m,t,d;
      cout<<"ingrese la categoria"<<endl;
      cin>>c;
       cout<<"ingrese el precio a pagar"<<endl;
       cin>>m;
      if(c==1)
      {
      d=m*0.35;
      t=m-d;
      cout<<"el total a pagar es"<<t<<endl;
      }
      else if(c==2)
      {
      d=m*0.22;
      t=m-d;
      cout<<"el total a pagar es"<<t<<endl;
      }
      else if(c==3)
      {
      d=m*0.15;
      t=m-d;
      cout<<"el total a pagar es"<<t<<endl;
      }
      else if(c==4)
      {
      d=m*0.05;
      t=m-d;
      cout<<"el total a pagar es"<<t<<endl;
      }
      else if(c>4)
      {
      cout<<"el total a pagar es"<<m<<endl;
      }
      system("pause");
}
         
              
