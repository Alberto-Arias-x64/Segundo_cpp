#include<iostream>
using namespace std;
main()
{
                float t,;
                cout<<"ingrese la temperatura"<<endl;
                cin>>t;
                if (t>85)
                {
                cout<<"su deporte es natacion"<<endl;
                }
                else if (t>70 && t<=85)
                {
                 cout<<"su deporte es tenis"<<endl;
                }
                else if (t>32 && t<=70)
                 {
                 cout<<"su deporte es golf"<<endl;
                }
                else if (t>10 && t<=32)
                 {
                 cout<<"su deporte es esqui"<<endl;
                }
                else if (t<=10)
                 {
                 cout<<"su deporte es marcha"<<endl;
                }
                
system ("pause");
}
