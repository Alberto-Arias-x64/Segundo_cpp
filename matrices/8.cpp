#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int al[10],x,y=0,z;
	for(x=1;x<11;x++)
	{
		cout<<"escriva la nota del estudiante #"<<x<<" ";
		cin>>al[x];
	}
	for(x=1;x<11;x++)
	{
		y=y+al[x];
	}
	z=y/10;
	cout<<"el promedio del grupo es de "<<z<<endl;
}
