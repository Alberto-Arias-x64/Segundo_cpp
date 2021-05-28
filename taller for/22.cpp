#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float i,y,z,x,a;
	z=0;
	cout<<"escriva un numero ";
	cin>>x;
	z=0;
	a=0;
	for(i=1; i<=x; i++)
	{
		z=i;
		y=pow(z,z);
		a=a+y;		
	}
	cout<<"el valor de la suma sera de "<<a<<endl;
}
