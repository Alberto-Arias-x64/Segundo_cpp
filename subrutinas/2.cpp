#include<iostream>
#include<math.h>
void pos(int n);
void neg(int n);
void nul(int n);
void par(int n);
void impar(int n);
using namespace std;
main()
{
     float n1,r, num[30],x;
     int i;
     for(i=1;i<=30;i++)
     {
     	cout<<"escriba un numero ";
     	cin>>num[i];
	 }
	 for(i=1;i<=30;i++)
     {
     	x=num[i];
     	pos(x);
     	neg(x);
     	nul(x);
     	par(x);
     	impar(x);
	 }
}
	 
void pos(int n)
{
    if(n>0)
    {
    	cout<<"el numero "<<n<<" es positivo"<<endl;
	}
}
    
void neg(int n)
{
    if(n<0)
    {
    	cout<<"el numero "<<n<<" es negativo"<<endl;
	}
}

void nul(int n)
{
    if(n==0)
    {
    	cout<<"el numero "<<n<<" es neutro"<<endl;
	}
}

void par(int n)
{
    if(n%2==0)
    {
    	cout<<"el numero "<<n<<" es par"<<endl;
	}
}

void impar(int n)
{
    if(n%2!=0)
    {
    	cout<<"el numero "<<n<<" es impar"<<endl;
	}
}
