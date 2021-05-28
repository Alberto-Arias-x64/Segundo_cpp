#include<iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main()
{
	float nt, cp, th, s;
	char Nombre[15];
	int Te;
	
	cout<<"ingrese el nombre del empleado"<<endl;
	cin>>Nombre;
	cout<<"ingrese el tipo del empleado"<<endl;
	cin>>Te;
	cout<<"ingrese numero de horas trabajadas"<<endl;
	cin>>nt;
	cout<<"ingrese cuota que se le paga por hora"<<endl;
	cin>>cp;
	
	th=nt*cp;
	
	if(nt>40)
	
	switch (Te)
	{
		case 1:
			s=(th*1.5);
			cout<<"el sueldo del empeado es: "<<s<<endl;
		break;
		case 2:
			s=(th*2);
			cout<<"el sueldo del empeado es: "<<s<<endl;
		break;
		case 3:
			s=(th*2.5);
			cout<<"el sueldo del empeado es: "<<s<<endl;
		break;	
		case 4:
			s=(th*3);
			cout<<"el sueldo del empeado es: "<<s<<endl;
		break;
	
	}
	else if (nt<40)
	{
		cout<<"error"<<endl;
	}
getch();
}

