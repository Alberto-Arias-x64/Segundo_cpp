#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float y,x;
	while (y!=0)
	{
	cout<<"ingrese un numero "<<endl;
	cin>>x;
		if(x<=0)
		{
			cout<<"vuelva a escribir un numero"<<endl;
		}
		else
		{
			y=sqrt(x);
			cout<<"la raiz cuadrada del numero es "<<y<<endl;
			break;
		}
	}
}
