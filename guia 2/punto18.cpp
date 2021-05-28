#include<iostream>
using namespace std;
main()
{ int costf1,costf2,costf3,costf4,costf5,costf6,costf7,num,cl;
   
  
  cout<<"12 America del norte"<<endl;
  cout<<"15 America central "<<endl;
  cout<<"18 America del sur"<<endl;
  cout<<"19 Europa"<<endl;
  cout<<"23 Asia"<<endl;
  cout<<"25 Africa"<<endl;
  cout<<"29 Oceania"<<endl;
  
  cout<<"ingrese la clave"<<endl;
  cin>>cl;
  cout<<"ingrese la cantidad de minutos gastados";
  cin>>num;
  
  if (cl=='12')
  { (num<3);
    costf1=num*2;
  cout<<"el costo final de la llamada es"<<costf1<<endl;
  }
  else if (num>4)
  {
   costf1=num*1.5;
  cout<<"el costo final de la llamada es"<<costf1<<endl;
  }
   
  if (cl=='15')
  { (num<3);
    costf2=num*2.2;
  cout<<"el costo final de la llamada es"<<costf2<<endl;
  }
  else if (num>4)
  {
   costf2=num*1.8;
  cout<<"el costo final de la llamada es"<<costf2<<endl;
  }
  if (cl=='18')
  { (num<3);
    costf3=num*4.5;
  cout<<"el costo final de la llamada es"<<costf3<<endl;
  }
  else if (num>4)
  {
   costf3=num*3.5;
  cout<<"el costo final de la llamada es"<<costf3<<endl;
  }
  if (cl=='19')
  { (num<3);
    costf4=num*3.5;
  cout<<"el costo final de la llamada es"<<costf4<<endl;
  }
  else if (num>4)
  {
   costf4=num*2.7;
  cout<<"el costo final de la llamada es"<<costf4<<endl;
  }
  if (cl=='23')
  { (num<3);
    costf5=num*6;
  cout<<"el costo final de la llamada es"<<costf5<<endl;
  }
  else if (num>4)
  {
   costf5=num*4.6;
  cout<<"el costo final de la llamada es"<<costf5<<endl;
  }
  if (cl=='25')
  { (num<3);
    costf6=num*6;
  cout<<"el costo final de la llamada es"<<costf6<<endl;
  }
  else if (num>4)
  {
   costf6=num*4.6;
  cout<<"el costo final de la llamada es"<<costf6<<endl;
  }
  if (cl=='29')
  { (num<3);
    costf7=num*5;
  cout<<"el costo final de la llamada es"<<costf7<<endl;
  }
  else if (num>4)
  {
   costf7=num*3.9;
  cout<<"el costo final de la llamada es"<<costf7<<endl;
  }
system ("pause");
  
}
  
  
