#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float a,b,x,y;
	 cout<<"ingrese los dias y los kilometros recoridos respectivamente ";
	 cin>>a>>b;
	
	if(a>=7 && b>=800)
	{
	x=(b*0.23);
	y=x-(x*0.3);
	cout<<"el precio del billete dera de "<<y<<endl;
	}
	else
	{
	x=(b*0.23);
	cout<<"el precio del billete dera de "<<x<<endl;
    }
	
system ("pause");
}
