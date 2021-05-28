#include<iostream>
using namespace std;
main()
{
	float x,y;
	 cout<<"ingrese el valor de la compra ";
	 cin>>x;
	
	if(x>2500)
	{
	y=x-(x*0.08);
	cout<<"el valor a pagar sera de "<<y<<endl;
	}
	else
	{
	y=x;
	cout<<"el valor a pagar sera de "<<y<<endl;
    }
	
system ("pause");
}
