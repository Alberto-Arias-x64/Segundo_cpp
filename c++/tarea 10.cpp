#include<iostream>
#include<math.h>
using namespace std;
main()
{
      float a,b,n,t,t2;
      cout<<"ingrese dos numeros "<<endl;
      cin>>a>>b;
      cout<<"ingrese el exponente"<<endl;
      cin>>n;      
      t=pow(a/b,n);
      t2=pow(a,n)/pow(b,n);
      cout<<"el resuldado es"<<t<<endl;
      cout<<"el resuldado anterior es igual a"<<t2<<endl;
      system("pause");
}
         
              
