#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int a,b,c,x,xa,y,z,m;
	cout<<"ingrese el valor de a"<<endl;
	cin>>a;
	cout<<"ingrese el valor de b"<<endl;
	cin>>b;
	cout<<"ingrese el valor de c"<<endl;
	cin>>c;
	if(a<=0)
	{
	cout<<"error matematico"<<endl;
    }
	else if(a>0)
	{
	y=pow(b,2);
	m=y-(4*a*c);
	z=sqrt(m);
	x=(((-b) + z)/(2*a));
	xa=(((-b) - z)/(2*a));
	cout<<"el valor de x1 sera de "<<x<<endl;
	cout<<"el valor de x2 sera de "<<xa<<endl;
    }
}
