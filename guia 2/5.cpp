#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float a,b,c,d,x,y;
	 cout<<"ingrese 4 numeros enteros ";
	 cin>>a>>b>>c>>d;
	
	if(d==0)
	{
	cout<<"error matematico "<<endl;
	}
	else
	{
	x=pow((a-c), 2)/d;
	y=pow((a-b), 3)/d;
	cout<<"el valor de la ecuacion 1 es de "<<x<<endl;
	cout<<"el valor de la ecuacion 2 es de "<<y<<endl;
    }
	
system ("pause");
}
