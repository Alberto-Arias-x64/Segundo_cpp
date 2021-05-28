#include<iostream>
using namespace std;
main()
{
      float v,m,t,d;
       cout<<"ingrese el precio a pagar"<<endl;
       cin>>v;
       cout<<"1 = blazer-trail"<<endl;
       cout<<"2 = cavalier"<<endl;
       cout<<"3 = chevy"<<endl;
       cout<<"4 = opel-astra"<<endl;
       cout<<"escoja su opcion"<<endl;
     
       cin>>m;

      if(m==1)
      {
      d=v*0.08;
      t=v-d;
      cout<<"el total a pagar es"<<t<<endl;
      }
      else if(m==2)
      {
      d=v*0.05;
      t=v-d;
      cout<<"el total a pagar es"<<t<<endl;
      }
      else if(m==3)
      {
      d=v*0.06;
      t=v-d;
      cout<<"el total a pagar es"<<t<<endl;
      }
      else if(m==4)
      {
      d=v*0.09;
      t=v-d;
      cout<<"el total a pagar es"<<t<<endl;
      }
      system("pause");
}
         
              
