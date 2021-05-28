#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int i,x,y;
	cout<<"escriva el valor inicial del rango ";
	cin>>x;
	cout<<"escriva el valor final del rango ";
	cin>>y;
	for(i=x; i<=y; i++)
	{
		if(i<0)
		{
			cout<<"el numero "<<i<<" es negativo"<<endl;
		}
		else if(i==0)
		{
			cout<<"el numero "<<i<<" es neutro"<<endl;
		}
		else
		{
			cout<<"el numero "<<i<<" es positivo"<<endl;
		}
	}
}
