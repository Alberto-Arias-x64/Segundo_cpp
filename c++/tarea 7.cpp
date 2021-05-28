#include<iostream>
using namespace std;
main()
{
      float s,a,ts;
      cout<<"ingrese el sueldo"<<endl;
      cin>>s;
      if(s<10000)
      {
      a=s*0.15;
      ts=a+s;
      cout<<"el total del sueldo es "<<ts<<endl;
      }
      else if(10000==s || s<15000) 
      {
      a=s*0.11;
      ts=a+s;
      cout<<"el total del sueldo es "<<ts<<endl;
      }
      else if(s>15000) 
      {
      a=s*0.08;
      ts=a+s;
      cout<<"el total del sueldo es "<<ts<<endl;
      }
      system("pause");
}
         
