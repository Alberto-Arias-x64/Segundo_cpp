#include<iostream>
using namespace std;
main()
{
                float t,y;
                cout<<"ingrese el sueldo del trabajador"<<endl;
                cin>>t;
                if (t<10000)
                {
                 y=t+(t*0.15);
                cout<<"su nuevo sueldo es de"<<y<<endl;
                }
                else if (10000<=t<=15000)
                {
                y=t+(t*0.11);
                cout<<"su nuevo sueldo es de"<<y<<endl;
                }
                else if (t>15000)
                {
                y=t+(t*0.8);
                cout<<"su nuevo sueldo es de"<<y<<endl;
                }
                
system ("pause");
}
