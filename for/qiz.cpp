#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int c,h,pt,xh,x;
	cout<<"ingrese la categoria del trabajador"<<endl;
	cin>>c;
	switch (c)
	{
		case 1:
	cout<<"ingrese las horas del trabajador"<<endl;
	cin>>h;
	cout<<"ingrese las horas extras del trabajador"<<endl;
	cin>>xh;
	x=h*30;
	if(xh<=30)
	{
		pt=h*30+x;
		cout<<"el total de pagar al empleado sera de  "<<pt<<" lukas "<<endl;
	}
	else
	{
		pt=30*30+x;
		cout<<"el total de pagar al empleado sera de  "<<pt<<" lukas "<<endl;
	}
	break;
	case 2:
	cout<<"ingrese las horas del trabajador"<<endl;
	cin>>h;
	cout<<"ingrese las horas extras del trabajador"<<" lukas "<<endl;
	cin>>xh;
	x=h*38;
	if(xh<=30)
	{
		pt=h*38+x;
		cout<<"el total de pagar al empleado sera de  "<<pt<<" lukas "<<endl;
	}
	else
	{
		pt=30*38+x;
		cout<<"el total de pagar al empleado sera de  "<<pt<<" lukas "<<endl;
	}
	break;case 3:
	cout<<"ingrese las horas del trabajador"<<endl;
	cin>>h;
	cout<<"ingrese las horas extras del trabajador"<<endl;
	cin>>xh;
	x=h*50;
	if(xh<=30)
	{
		pt=h*50+x;
		cout<<"el total de pagar al empleado sera de  "<<pt<<" lukas "<<endl;
	}
	else
	{
		pt=30*50+x;
		cout<<"el total de pagar al empleado sera de  "<<pt<<" lukas "<<endl;
	}
	break;
	case 4:
	cout<<"ingrese las horas del trabajador"<<endl;
	cin>>h;
	x=h*70;
	cout<<"el total de pagar al empleado sera de  "<<x<<" lukas. Lo sentimos la categoria 4 no incluye "<<endl;
	break;
}
}
