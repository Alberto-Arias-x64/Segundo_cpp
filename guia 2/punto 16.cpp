#include<iostream>
using namespace std;
main()
{char mo; 
 int p, tp,ttp;

 cout<<"B Blazer-trail"<<endl;
  cout<<"C Cavalier"<<endl;
  cout<<"Ch Chevy"<<endl;
  cout<<"O Opel-Astral"<<endl;
  
  cout<<"ingrese el modelo";
  cin>>mo;
  cout<<"ingrese el precio del carro";
  cin>>p;
  
   if (mo=='B')
  { tp=p*0.08,
    ttp=p-tp;
  cout<<"el precio del carro es "<<ttp<<endl;
  }
  else if (mo=='C')
  {tp=p*0.05,
   ttp=p-tp;
  cout<<"el precio del carro es "<<ttp<<endl;
  }
   else if (mo=='Ch')
  {tp=p*0.06,
  ttp=p-tp;
  cout<<"el precio del carro es "<<ttp<<endl;
  }
  else if (mo=='O')
  {tp=p*0.09,
  ttp=p-tp;
   cout<<"el resultado es "<<ttp<<endl;
  }
 system("pause");
}
