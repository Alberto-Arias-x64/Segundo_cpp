#include<iostream>
using namespace std;
main()
{
                float s,c,ct;
                cout<<"ingrese seno y coseno";
                cin>>s>>c;
                
                if (s==0)
                {
                         cout<<"error matematico"<<endl;
                }
                else
                {
                ct=c/s; 
                cout<<"cotangente es igual a "<<ct<<endl;
                }
system ("pause");
}
