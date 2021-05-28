#include<iostream>
using namespace std;
main()
{
      float ctg,c,s;
      cout<<"ingrese el coseno y el seno"<<endl;
      cin>>c>>s;
      if(s==0)
      {
              cout<<"error matematico"<<endl;
      }
      else
      {
          ctg=c/s;
          cout<<"la cotagente es"<<ctg<<endl;
      }
      system("pause");
}
         
              
