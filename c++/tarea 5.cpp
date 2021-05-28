#include<iostream>
#include<math.h>
using namespace std;
main()
{
      float a,b,c,d,t,t2;
      cout<<"ingrese 3 numeros cualquieras"<<endl;
      cin>>a>>b>>c;
      cout<<"ingrese el denominador"<<endl;
      cin>>d;
      if(d==0)
      {
              cout<<"error matematico"<<endl;
      }
      else
      {
          t=pow(a-c,2)/d;
          t2=pow(a-b,3)/d;
          cout<<"el resuldado del primer ejercio es"<<t<<endl;
          cout<<"el resuldado del segundo ejercio es"<<t2<<endl;
      }
      system("pause");
}
         
              
