#include<iostream>
#include<math.h>
using namespace std;
main()
{
      float a,n,t,t2;
      cout<<"ingrese la base difente de cero "<<endl;
      cin>>a;
      cout<<"ingrese el exponente"<<endl;
      cin>>n;
      if(a!=0)
      {
      t=pow(a,-n);
      t2=1/pow(a,n);
      cout<<"el resuldado es "<<t<<endl;
      cout<<"el resuldado anterior es igual a"<<t2<<endl;
      }  
      system("pause");
}
         
              
