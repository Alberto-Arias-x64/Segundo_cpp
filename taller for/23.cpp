#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float i,r,x,y,z,a;
	cout<<"ingrese el numero de trabajadores ";
	cin>>x;
	z=0;
	a=0;
	for(i=1; i<=x; i++)
	{
		cout<<"ingrese el sueldo del trabajador ";
		cin>>y;
		if(y<=1000)
		{
			r=y+(y*0.15);
			cout<<" el suledo del trabajor sera de "<<r<<" lukas"<<endl;
			z=r;
			a=a+z;
		}
		else
		{
			r=y+(y*0.12);
			cout<<" el suledo del trabajor sera de "<<r<<" lukas"<<endl;
			z=r;
			a=a+z;
		}
		
	}
	cout<<" el valor total de la nomina sera de "<<a<<" lukas"<<endl;
}
