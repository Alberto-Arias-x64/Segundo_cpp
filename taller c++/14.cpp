#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int x,b,a;
	cout<<"escriva el valor de la compra"<<endl;
	cin>>x;
	if(x<500)
	{
		cout<<"el valor a pagar sera de "<<x<<endl;
	}
	else if(500<=x && x<=1000)
	{
		b=x-(x*0.05);
		cout<<"el valor a pagar sera de "<<b<<endl;
	}
	else if(1000<x && x<=7000)
	{
		b=x-(x*0.11);
		cout<<"el valor a pagar sera de "<<b<<endl;
	}
	else if(7000<x && x<=15000)
	{
		b=x-(x*0.18);
		cout<<"el valor a pagar sera de "<<b<<endl;
	}
	else if(x>15000)
	{
		b=x-(x*0.25);
		cout<<"el valor a pagar sera de "<<b<<endl;
	}
}
