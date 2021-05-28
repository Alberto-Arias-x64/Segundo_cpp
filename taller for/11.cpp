#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float i,y,z,x,p;
	z=0;
	cout<<"escriva la cantidad de estudiantes que presentaron la prueva ";
	cin>>x;
	z=0;
	for(i=1; i<=x; i++)
	{
		cout<<"escriva el valor de la nota del estudiante ";
		cin>>y;
		z=z+y;
	}
	p=z/x;
	cout<<"el valor promedio sera de "<<p<<endl;
}
