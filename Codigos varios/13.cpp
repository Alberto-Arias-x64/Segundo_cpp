#include<iostream>
using namespace std;
main()
{
	float LADO, A, COSTOA, B, BASE, ALTURA, COSTOB;
	cout<<"ingrese los metros cuadrados del terreno 1"<<endl;
	cin>>LADO;
	cout<<"ingrese base y altura del terreno 2"<<endl;
	cin>>BASE>>ALTURA;
	cout<<"ingrese costo metro cuadrado del terreno 1"<<endl;
	cin>>COSTOA;
	cout<<"ingrese costo metro cuadrado del terreno 2"<<endl;
	cin>>COSTOB;
	
	A=LADO*COSTOA;
	B=(BASE*ALTURA)*COSTOB;

	if (A==B)
	{
	cout<<"cuestan lo mismo "<<endl;	
	}
	if (B<A)
	{
	cout<<"El terreno 2 es mas economico"<<endl;	
	}
	if (A<B)
	{
	cout<<"El terreno 1 es mas economico "<<endl;	
	}
}
