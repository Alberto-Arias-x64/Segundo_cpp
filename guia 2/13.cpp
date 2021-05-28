#include<iostream>
using namespace std;
main()
{
                float a,b,c;
                cout<<"ingrese un numero ";
                cin>>a;
                cout<<"ingrese un numero ";
                cin>>b;
                cout<<"ingrese un numero ";
                cin>>c;
                
                if (a>b && a>c)
                {
                cout<<"el numero mayor es "<<a<<endl;
                }
                else if (b>a && b>c)
                {
                 cout<<"el numero mayor es "<<b<<endl;
                }
                else if (c>a && c>b)
                 {
                 cout<<"el numero mayor es "<<c<<endl;
                }
                else if (a==b)
                 {
                 cout<<"los numeros mayores son"<<a << b<<endl;
                }
                else if (a==c)
                 {
                 cout<<"los numeros mayores son"<<a << c<<endl;
                }
                else if (b==c)
                 {
                 cout<<"los numeros mayores son"<<b << c<<endl;
                }
                
system ("pause");
}
