#include <iostream>
#include <math.h>

using namespace std;
main ()
{
	int a;
	cout<<"ingrese numero del mes :"<<endl;
	cin>>a;
	
	if (13>a>0)
	{
		switch(a)
		{
			case 1: 
			cout<<"el mes es: enero"<<endl;
			break;
				case 2: 
			cout<<"el mes es: febrero"<<endl;
			break;
				case 3: 
			cout<<"el mes es: marzo"<<endl;
			break;
				case 4: 
			cout<<"el mes es: abril"<<endl;
			break;
				case 5: 
			cout<<"el mes es: mayo"<<endl;
			break;
				case 6: 
			cout<<"el mes es: junio"<<endl;
			break;
				case 7: 
			cout<<"el mes es: julio"<<endl;
			break;
				case 8: 
			cout<<"el mes es: agosto"<<endl;
			break;
				case 9: 
			cout<<"el mes es: septiembre"<<endl;
			break;
				case 10: 
			cout<<"el mes es: octubre"<<endl;
			break;
				case 11: 
			cout<<"el mes es: noviembre"<<endl;
			break;
				case 12: 
			cout<<"el mes es: diciembre"<<endl;
			break;
			
			
		}
	}
	else {
		cout<<"numero invalido"<<endl;
	}
	
	system("pause");
}
