#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main()
{
	int c;
	float tf, k, f, r,T;
	cout<<"ingrese la magnitud a convertir"<<endl;
	cin>>c;
	cout<<"ingrese los grados"<<endl;
	cin>>tf;


switch (c)
{

	case (1):
	 f=(tf-32)*0.5555555556;
	 k=(tf+237);
	 r=(tf);
	cout<<"la temperatura en grados fahrenheit"<<f<<endl;	
	cout<<"la temperatura en grados kelvin"<<k<<endl;
	cout<<"la temperatura en grados rankine"<<r<<endl;
	break;
 	
}
getch();
}



