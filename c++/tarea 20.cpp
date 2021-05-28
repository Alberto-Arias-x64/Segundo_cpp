#include<iostream>

using namespace std;
main()
{
      float o,x,t,p,v,l;
      cout<<"escriba el total de la medida a convertir"<<endl;
      cin>>x;
      cout<<"la medida ingresada es"<<endl;
      cout<<"1 = longitud"<<endl;
      cout<<"2 = volumen"<<endl;
      cout<<"3 = peso "<<endl;
      cout<<"escoja su opcion"<<endl;
      cin>>o;
      if(o==1)
      {
      cout<<"1 = pulgada a milimetro"<<endl;
      cout<<"2 = yarda a metro "<<endl;
      cout<<"3 = milla a kilometro"<<endl;
      cout<<"4 = pulgada cuadrada a centimetros cuadrados"<<endl;
      cout<<"5 = pie cuadrado a metros cuadrados "<<endl;
      cout<<"6 = yarda cuadrada a metros cuadrados"<<endl;
      cout<<"7 = acre a hectarea"<<endl;
      cout<<"8 = milla cuadra a kilometros cuadrados"<<endl;
      cout<<"escoja su opcion"<<endl;
      cin>>l;
      
      if(l==1)
      {
      t=x*25.40;
      cout<<"el total en milimetros es "<<t<<endl;
      }
      else if(l==2)
      {
      t=x*0.9144;
      cout<<"el total en metros es "<<t<<endl;
      }
      
      else if(l==3)
      {
      t=x*1.6093;
      cout<<"el total en kilometros es "<<t<<endl;
      }
      
      else if(l==4)
      {
      t=x*6.452;
      cout<<"el total en centimetros cuadrados es "<<t<<endl;
      }
      
      else if(l==5)
      {
      t=x*0.09290;
      cout<<"el total en metros cuadrados es "<<t<<endl;
      }
      
      else if(l==6)
      {
      t=x*0.8361;
      cout<<"el total en metros cuadrados es "<<t<<endl;
      }
      
      else if(l==7)
      {
      t=x*0.4047;
      cout<<"el total en hectareas es "<<t<<endl;
      }
      
      else if(l==8)
      {
      t=x*2.59;
      cout<<"el total en kilometros cuadrados es "<<t<<endl;
      }
      }
      else if(o==2)
      {
      cout<<"1 = pie al cubo a metros al cubo"<<endl;
      cout<<"2 = yarda al cubo a metros al cubo "<<endl;
      cout<<"3 = pinta a litros"<<endl;
      cout<<"4 = galon a litros"<<endl;
      cout<<"escoja su opcion"<<endl;
      cin>>v;
      if(v==1)
      {
      t=x*0.02832;
      cout<<"el total en metros al cubo equivale a "<<t<<endl;
      }
      else if(v==2)
      {
      t=x*0.7646;
      cout<<"el total en metros al cubo equivale a "<<t<<endl;
      }
      else if(v==3)
      {
      t=x*0.56826;
      cout<<"el total en litros equivale a "<<t<<endl;
      }
      else if(v==4)
      {
      t=x*4.54609;
      cout<<"el total en litros equivale a "<<t<<endl;
      }
      }
      else if(o==3)
      {
      cout<<"1 = onzas a gramos"<<endl;
      cout<<"2 = libras a kilogramos"<<endl;
      cout<<"3 = tonelada inglesa a tonelada"<<endl;
      cout<<"escoja su opcion"<<endl;
      cin>>p;
      if(p==1)
      {
      t=x*28.23;
      cout<<"el total en gramos es equivalente a "<<t<<endl;
      }
      else if(p==2)
      {
      t=x*0.45359;
      cout<<"el total en kilogramos es equivalente a "<<t<<endl;
      }
      else if(p==3)
      {
      t=x*1.0160;
      cout<<"el total en toneladas es equivalente a "<<t<<endl;
      }
      }
      system("pause");
}
