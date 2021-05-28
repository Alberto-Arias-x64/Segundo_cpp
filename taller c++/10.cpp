#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int a,b;
	cout<<"ingrese el valor de a"<<endl;
	cin>>a;
	cout<<"ingrese el valor de b"<<endl;
	cin>>b;
	if(a<b)
	{
		cout<<"los numeros en orden seran "<<a<<" y "<<b<<endl;
	}
	else
	{
		cout<<"los numeros en orden seran "<<b<<" y "<<a<<endl;
	}
}
