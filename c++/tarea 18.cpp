#include<iostream>
using namespace std;
main()
{

      float nm,c,t;
      cout<<"ingrese los minutos gastados"<<endl;
      cin>>nm;
      cout<<"ingrese la clave de su zona"<<endl;
      cin>>c;  
      if(c==12)
      {
      if(nm<=3)
      {
      t=nm*2;
      cout<<"el costo total de los minutos es de "<<t<<endl;
      }
      else if(nm>3)
      {
      t=(nm*2)*1.5;
      cout<<"el costo total de los minutos es de "<<t<<endl;
      }
      }
      else if(c==15)
      {
      if(nm<=3)
      {
      t=nm*2.2;
      cout<<"el costo total de los minutos es de "<<t<<endl;
      }
      else if(nm>3)
      {
      t=(nm*2.2)*1.8;
      cout<<"el costo total de los minutos es de "<<t<<endl;
      }
      }
      else if(c==18)
      {
      if(nm<=3)
      {
      t=nm*4.5;
      cout<<"el costo total de los minutos es de "<<t<<endl;
      }
      else if(nm>3)
      {
      t=(nm*4.5)*3.5;
      cout<<"el costo total de los minutos es de "<<t<<endl;
      }
      }
      else if(c==19)
      {
      if(nm<=3)
      {
      t=nm*3.5;
      cout<<"el costo total de los minutos es de "<<t<<endl;
      }
      else if(nm>3)
      {
      t=(nm*3.5)*2.7;
      cout<<"el costo total de los minutos es de "<<t<<endl;
      }
      }
      else if(c==23)
      {
      if(nm<=3)
      {
      t=nm*6;
      cout<<"el costo total de los minutos es de "<<t<<endl;
      }
      else if(nm>3)
      {
      t=(nm*6)*4.6;
      cout<<"el costo total de los minutos es de "<<t<<endl;
      }
      }
      else if(c==25)
      {
      if(nm<=3)
      {
      t=nm*6;
      cout<<"el costo total de los minutos es de "<<t<<endl;
      }
      else if(nm>3)
      {
      t=(nm*6)*4.6;
      cout<<"el costo total de los minutos es de "<<t<<endl;
      }
      }
      else if(c==29)
      {
      if(nm<=3)
      {
      t=nm*5;
      cout<<"el costo total de los minutos es de "<<t<<endl;
      }
      else if(nm>3)
      {
      t=(nm*5)*3.9;
      cout<<"el costo total de los minutos es de "<<t<<endl;
      }
      }
      system("pause");
}


      
      
          
         
     
