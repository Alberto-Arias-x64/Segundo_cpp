#include<iostream>
using namespace std;
main()
{ int med,c;
  char op;
cout<<"1 pulgadas"<<endl;
  cout<<"2 yardas"<<endl;
  cout<<"3 millas"<<endl;
  
  cout<<"ingrese la unidad de medida";
  cin>>op;
  cout<<"ingrese las medidas";
  cin>>med;
  
  if (op=='1')
  { c=med*25.40;
    
  cout<<"la medida en milimetros es "<<c<<endl;
  }
  else if (op=='2')
  {c=med*0.9144;
  
  cout<<"la medida en metros es"<<c<<endl;
  }
   else if (op=='3')
  {c=med*1.6093;
  
  cout<<"la medida en kilometros es "<<c<<endl;
} system("pause");
}
