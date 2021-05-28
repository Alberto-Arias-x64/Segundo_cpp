#include<iostream>
using namespace std;
main()
{
      float s,t,ts;
      cout<<"ingrese el sueldo"<<endl;
      cin>>s;
      if(s>1000)
      {
      t=s*0.12;
      ts=t+s;
      cout<<"el total del sueldo es "<<ts<<endl;
      }
      else if(1000==s || s<1000) 
      {
      t=s*0.15;
      ts=t+s;
      cout<<"el total del sueldo es "<<ts<<endl;
      }
      system("pause");
}
         
              
