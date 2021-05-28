#include<iostream>
using namespace std; 
main()
{
	float SUELDO;
	cout<<"ingrese el sueldo del empleado";
	cin>>SUELDO;
	
	
	if (SUELDO<10000)
	{
	SUELDO=(SUELDO*0.15)+SUELDO;
	cout<<"el sueldo del empleado es:"<<SUELDO<<endl;
 	}
	
	else if (SUELDO<=10000 && SUELDO>=10000)
	{
	SUELDO=(SUELDO*0.11)+SUELDO;
	cout<<"el sueldo del empleado es:"<<SUELDO<<endl;
	}
	
	else if (SUELDO>15000)
	{
	SUELDO=(SUELDO*0.8)+SUELDO;
	cout<<"el sueldo del empleado es:"<<SUELDO<<endl;
	}

}
