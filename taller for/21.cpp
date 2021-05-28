#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int i,x,y,z,a,e,p,n;
	z=0;
	a=0;
	e=0;
	p=0;
	cout<<"escriva la cantidad de personas ";
	cin>>n;
	for(i=1; i<=n; i++)
	{
	cout<<"escriva la altura de la persona ";
	cin>>x;
	cout<<"escriva el peso de la persona ";
	cin>>y;
	a=a+x;
	z=z+y;
	}
	e=a/n;
	p=z/n;
	cout<<"el valor promedio de la estatura sera de "<<e<<endl;
	cout<<"el valor promedio de el peso sera de "<<e<<endl;
}
