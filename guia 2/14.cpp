#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float X, R;
	cout<<"ingrese ingrese Un numero real ";
	cin>>X;
	
	if (X==0)
	{
	R=pow(X,2);
	cout<<"la respuesta es:"<<R<<endl;
	}
	else if (X==1)
	{
	R=X/6;
	cout<<"la respuesta es:"<<R<<endl;
	}
	else if (X==2)
	{
	R=pow(X,2);
	cout<<"la respuesta es:"<<R<<endl;
	}
	else if (X==3)
	{
	R=pow(X,3)+5;
	cout<<"la respuesta es:"<<R<<endl;
	}
system ("pause");
}
