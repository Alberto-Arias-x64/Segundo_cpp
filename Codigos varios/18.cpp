#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	char n [30];
                cout<<"ingrese el nombre del estudiante "<<endl;
                cin>>n;
    
    float p,x;
                cout<<" "<<endl;
                cout<<"ingrese el promedio del estudiante "<<endl;
                cin>>p;
                cout<<" "<<endl;
                cout<<"ingrese el tipo de bachillerato del estudiante"<<endl;
				cout<<"1 fisicomatematico"<<endl;
				cout<<"2 matematico"<<endl;
				cout<<"3 quimico"<<endl;
				cout<<"4 linguista"<<endl;
				cout<<"5 vago"<<endl;
				cout<<" "<<endl;
                cin>>x;
                
                if (p>=90)
                {
                         cout<<"el estudiante "<<n<<" a sido aceptado"<<endl;
                }
                else if ((x==1) && (90<p<80))
                {
                     cout<<"el estudiante "<<n<<" a sido aceptado"<<endl;
                }
                else
                {
                	cout<<"el estudiante "<<n<<" a sido rechazado"<<endl;
				}
                
            
system ("pause");
}
