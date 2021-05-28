#include<iostream>

using namespace std;
main()
{
      float o,x,t;
      cout<<"escriba el total de la medida a convertir"<<endl;
      cin>>x;
      cout<<"1=convertir pungadas a milimetros"<<endl;
      cout<<"2=convertir yardas a metros"<<endl;
      cout<<"3=convertir millas a kilometros"<<endl;
      cout<<"escoja su opcion"<<endl;
      cin>>o;
      if(o==1)
      {
      t=x*25.40;
      cout<<"el total en milimetros es "<<t<<endl;
      }
      else if(o==2)
      {
      t=x*0.9144;
      cout<<"el total en metros es "<<t<<endl;
      }
      else if(o==3)
      {
       t=x*1.6093;
      cout<<"el total en kilometros es "<<t<<endl;
      }
      system("pause");
}
