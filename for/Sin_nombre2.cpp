
#include<iostream>
#include<math.h>
#include <conio.h>
using namespace std;
main()

{
  float a, b ,c,d,e,f,g,h,z ;
  cin>>a;
  cin>>b;
  cin>>c;
  d=b*b-4*a*c;
  
  if (d < 0)
  {
  
  
  	cout<<"error matematico";
  }
  else 
  {
  	z= sqrt (d);
  	e= -b+z;
  	f=e/(2*a);
  	
  	g=-b-z;
  	h=g/(2*a);
  	
  	cout<<"el primer punto es "<<f<<endl;
  	cout<<"el segundo punto es "<<h<<endl;
  }
system("pause");
}
