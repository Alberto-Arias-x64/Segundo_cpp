#include<iostream>
#include<math.h>
using namespace std;
main()
{
      float y,x;
      cout<<"ingrese cualquier numero "<<endl;
      cin>>y;
      if(y<=11 && y>0)
      {
      x=y+36-3; 
      cout<<"el resultado es"<<x<<endl;
      cout<<"Y es"<<y<<endl;
      }
      else if(y>11 && y<=33)
      {
      x=pow(y,2)-10;
      cout<<"el resultado es"<<x<<endl;
      cout<<"Y es"<<y<<endl;
      }
       else if(y>33 && y<=64)
      {
      x=pow(y,3)+ pow(y,2)-1;
      cout<<"el resultado es"<<x<<endl;
      cout<<"Y es"<<y<<endl;
      }
      else if(y<0 || y>64)
      {
      x=0;
      cout<<"el resultado es"<<x<<endl;
      cout<<"Y es"<<y<<endl;
      }
      system("pause");
}
