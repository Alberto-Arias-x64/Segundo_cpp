#include<iostream>
#include<math.h>
using namespace std;
main()
{
	double vol[10],des[10],y=0,z=0,r=0,d=0;
	int x;
	for(x=1; x<=10; x++)
	{
		cout<<"introdusca el voltaje "<<x<<": ";
		cin>>vol[x];
	}
	x=0;
	for(x=1; x<=10; x++)
	{
		y=y+vol[x];
	}
	z=y/10;
	cout<<"el promedio de voltajes es "<<z<<endl;
	x=0;
	for(x=1; x<=10; x++)
	{
		des[x]=z-vol[x];
	}
	x=0;
	z=0;
	for(x=1; x<=10; x++)
	{
		des[x]=pow(des[x],2);
		z=z+des[x];
	}
	d=z/10;
	r=pow(d,0.5);
	cout<<"la desviacion estandar es "<<r<<endl;
}
