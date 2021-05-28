#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float i,y,z,x,p;
	z=0;
	cout<<"escriva la cantidad de gastos ";
	cin>>x;
	z=0;
	for(i=1; i<=x; i++)
	{
		cout<<"escriva el valor de los gastos ";
		cin>>y;
		z=z+y;
	}
	p=z/x;
	cout<<"el valor de la suma sera de "<<z<<endl;
	cout<<"el valor promedio de los gastos sera de "<<p<<endl;
}
