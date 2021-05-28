#include<iostream>
using namespace std;
main()
{
	float l, a, p, pd, ps, m2, pt;
	cout<<"ingrese largo del terreno ";
	cin>>l;
	cout<<"ingrese ancho del terreno ";
	cin>>a;
	cout<<"ingrese precio del metro cuadrado del terreno ";
	cin>>p;
	
	m2=l*a;
	pt=m2*p;
	
	if(m2>400)
	{
		pd=pt-(pt*0.1);
		cout<<"el precio del terreno es igual: "<<pd<<endl;
	}	
	else if (m2<=400)
	{
		cout<<"el precio del terreno es igual: "<<pt<<endl;
	}
}


