#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float x,y,z;
	cout<<"escriba el limite de numeros a sumar ";
	cin>>x;
	z=0;
	for(y=1;y<=x;y++)
	{
		z=z+y;
	}
	cout<<"la sumatoria es "<<z;
}
