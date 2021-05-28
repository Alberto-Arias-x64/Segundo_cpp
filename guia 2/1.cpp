#include<iostream>
using namespace std;
main()
{
                float s,c,t;
                cout<<"ingrese seno y coseno";
                cin>>s>>c;
                
                if (c==0)
                {
                         cout<<"error matematico"<<endl;
                }
                else
                {
                t=s/c; 
                cout<<"tangente es igual a "<<t<<endl;
                }
system ("pause");
}
