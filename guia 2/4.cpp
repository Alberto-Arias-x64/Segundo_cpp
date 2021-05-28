#include<iostream>
using namespace std;
main()
{
	float x,y,z;
	 cout<<"ingrese el sueldo del trabajador ";
	 cin>>z;
	
	if(z<1000)
	{
	y=(z*0.15);
	x=z+y;
	cout<<"el valor a pagar sera de "<<x<<endl;
	cout<<"el aumento sera "<<y<<endl;
	}
	else
	{
	y=(z*0.12);
	x=z+y;
	cout<<"el valor a pagar sera de "<<x<<endl;
	cout<<"el aumento sera "<<y<<endl;
    }
	
system ("pause");
}
