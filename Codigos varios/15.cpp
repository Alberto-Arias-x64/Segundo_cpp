#include<iostream>
using namespace std;
main()
{
	float nd, td, d, t, tp;
	cout<<"ingrese numero de dias de ospedaje"<<endl;
	cin>>nd;
	cout<<"ingrese total a pagar por dia"<<endl;
	cin>>td;
	
	t=(nd*td);
	
	if (nd>5 && nd<9)
		{
		tp=t-(t*0.1);
		d=(t*0.1);
		cout<<"el subtotal es: "<<t<<endl;
		cout<<"el descuento es de: "<<d<<endl;
		cout<<"el total es: "<<tp<<endl; 
		}
	else if (nd>10 && nd<14)
		{
		tp=t-(t*0.15);
		d=(t*0.15);
		cout<<"el subtotal es: "<<t<<endl;
		cout<<"el descuento es de: "<<d<<endl;
		cout<<"el total es: "<<tp<<endl; 
		}
	else if (nd>15)
		{
		tp=t-(t*0.2);
		d=(t*0.2);
		cout<<"el subtotal es: "<<t<<endl;
		cout<<"el descuento es de: "<<d<<endl;
		cout<<"el total es: "<<tp<<endl; 
		}

}

