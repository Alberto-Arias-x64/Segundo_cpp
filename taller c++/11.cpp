#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int a;
	cout<<"pulse un numero entre 1 y 12 para conocer el nombre del mes"<<endl;
	cin>>a;
	switch (a)
	{
		case 1:
		cout<<"el mes es enero"<<endl;
		break;
		case 2:
		cout<<"el mes es febrero"<<endl;
		break;
		case 3:
		cout<<"el mes es marzo"<<endl;
		break;
		case 4:
		cout<<"el mes es abril"<<endl;
		break;
		case 5:
		cout<<"el mes es mayo"<<endl;
		break;
		case 6:
		cout<<"el mes es junio"<<endl;
		break;
		case 7:
		cout<<"el mes es julio"<<endl;
		break;
		case 8:
		cout<<"el mes es agosto"<<endl;
		break;
		case 9:
		cout<<"el mes es septiembre"<<endl;
		break;
		case 10:
		cout<<"el mes es octubre"<<endl;
		break;
		case 11:
		cout<<"el mes es noviembre"<<endl;
		break;
		case 12:
		cout<<"el mes es diciembre"<<endl;
		break;
		default:
		cout<<"el numero no pertenece a un mes"<<endl;
		break;
	}
}
