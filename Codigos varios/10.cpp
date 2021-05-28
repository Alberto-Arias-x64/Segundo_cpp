#include<iostream>
using namespace std;
main()
{
	float a1, a2, a3, a4, a5, a6, l1, l2, l3, l4, l5, l6;
	
	cout<<"ingrese los tres angulos del triangulo 1 ";
	cin>>a1>>a2>>a3;
	cout<<"ingrese los tres lados del triangulo 1 ";
	cin>>l1>>l2>>l3;
	cout<<"ingrese los tres angulos del triangulo 2 ";
	cin>>a4>>a5>>a6;
	cout<<"ingrese los tres lados del triangulo 2 ";
	cin>>l4>>l5>>l6;
	
	if (a1==a4 && l1==l4)
	{
		cout<<"los triangulos son congruentes"<<endl;
	}
	else if (a2==a5 && l2==l5)
	{
		cout<<"los triangulos son congruentes"<<endl;
	}
	else if (a3==a6 && l3==l6)	
	{
		cout<<"los triangulos son congruentes"<<endl;
	}

}
