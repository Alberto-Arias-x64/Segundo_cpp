#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int i,x,y,z;
	cout<<"escriva el numero a sumar ";
	cin>>x;
	z=0;
	for(i=1; i<=x; i++)
	{
		y=i;
		z=z+y;
	}
	cout<<"el valor de la suma sera de "<<z<<endl;
}
