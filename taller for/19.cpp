#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float i,r,x,y;
	cout<<"ingrese el numero de trabajadores ";
	cin>>x;
	for(i=1; i<=x; i++)
	{
		cout<<"ingrese el sueldo del trabajador ";
		cin>>y;
		if(y<=800)
		{
			r=y+(y*0.15);
			cout<<" el suledo del trabajor sera de "<<r<<" lukas"<<endl;
		}
		else
		{
			cout<<" el suledo del trabajor sera de "<<y<<" lukas"<<endl;
		}
		
	}
}
