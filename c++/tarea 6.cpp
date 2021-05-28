#include<iostream>
using namespace std;
main()
{
      float ti,d,v,t;
      cout<<"ingrese el tiempo de estancia"<<endl;
      cin>>ti;
       cout<<"ingrese la distancia total(ida y vuelta)dado en km"<<endl;
       cin>>d;
      if(ti==7 || ti>7)
      {
      if(d==800 || d>800)
      {
      v=d*0.23;
      t=v*0.3;
      cout<<"el total de billete es"<<t<<endl;
      }
      }
      else if(ti<7 && d<800)
      {
          t=d*0.23;
          cout<<"el total del billete es"<<t<<endl;
      }
      system("pause");
}
         
              
