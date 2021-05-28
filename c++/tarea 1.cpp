#include<iostream>
using namespace std;
main()
{
      float tg,s,c;
      cout<<"ingrese el seno y el coseno"<<endl;
      cin>>s>>c;
      if(c==0)
      {
              cout<<"error matematico"<<endl;
      }
      else
      {
          tg=s/c;
          cout<<"la tangente es"<<tg<<endl;
      }
      system("pause");
}
         
              
