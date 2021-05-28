#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int a,b,c,d;
	cout<<"escriva el numero de dias de estancia "<<endl;
	cin>>a;
	cout<<"escriva la distancia en kilometros a recorrer"<<endl;
	cin>>b;
	c=0.17*b;
	if (a>=7 && b>=800)
	{
		d=c-(c*0.3);
		cout<<"el valor del voleto sera de "<<d<<" lukas"<<endl;
	}
	else
	{
		cout<<"el valor del voleto sera de "<<c<<" lukas"<<endl;
	}
}
