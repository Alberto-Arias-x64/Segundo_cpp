#include<iostream>
#include<math.h>
void pam();
void yam();
void mak();
using namespace std;
main()
{
    int op;
    cout<<"1. pilgadas a mmilimetros"<<endl;
    cout<<"2. yardas a metros"<<endl;
    cout<<"3. millas a kilometros"<<endl;
    cout<<"ingrese la opcion ";
    cin>>op;
    
    switch (op)
    {
        case 1: pam(); 
        break;
        case 2: yam();
        break;
        case 3: mak();
        break;
    }
}

void pam()
{
     float n1,r;
     cout<<"ingrese el numero ";
     cin>>n1;
     r=n1*25.4;
     cout<<"la convercion es "<<r<<endl;
}
    
void yam()
{
     float n1,r;
     cout<<"ingrese el numero ";
     cin>>n1;
     r=n1*0.9144;
     cout<<"la convercion es "<<r<<endl;
}

void mak()
{
     float n1,r;
     cout<<"ingrese el numero ";
     cin>>n1;
     r=n1*1.609;
     cout<<"la convercion es "<<r<<endl;
}


