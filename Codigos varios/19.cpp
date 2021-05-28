#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	char n [30];
                cout<<"ingrese la marca del automovil "<<endl;
                cin>>n;
    
    float p,x,y;
                cout<<" "<<endl;
                cout<<"ingrese el pais de origuen del automovil "<<endl;
				cout<<"1 aleman"<<endl;
				cout<<"2 japones"<<endl;
				cout<<"3 italiano"<<endl;
				cout<<"4 usa"<<endl;
				cout<<" "<<endl;
                cin>>x;
                cout<<"ingrese el costo del atomovil"<<endl;
                cout<<" "<<endl;
                cin>>p;              
                
                if (x==1)
                {
                	y=p+(p*0.2);
                    cout<<"el automovil de marca "<<n<<" tendra un valor de "<<y<<endl;
                }
                else if (x==2)
                {
                	y=p+(p*0.3);
                     cout<<"el automovil de marca "<<n<<" tendra un valor de "<<y<<endl;
                }
                else if (x==3)
                {
                	y=p+(p*0.15);
                     cout<<"el automovil de marca "<<n<<" tendra un valor de "<<y<<endl;
                }
                else if (x==4)
                {
                	y=p+(p*0.08);
                     cout<<"el automovil de marca "<<n<<" tendra un valor de "<<y<<endl;
                }
				else
                {
                    cout<<"el automovil de marca "<<n<<" no esta registrado "<<endl;
                }
				      
system ("pause");
}
