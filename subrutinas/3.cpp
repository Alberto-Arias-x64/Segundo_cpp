#include<iostream>
#include<math.h>
void pro(int n, int n2);
using namespace std;
main()
{
     float p,num[70],x;
     int i,r;
     for(i=1;i<=70;i++)
     {
     	cout<<"escriba el suelo del empleado #"<<i<<" ";
     	cin>>num[i];
	 }
	 for(i=1;i<=10;i++)
     {
     	p=p+num[i];
	 }
	 for(i=1;i<=70;i++)
     {
     	x=num[i];
     	pro(x,p);
	 }
	 cout<<"hay "<<r<<" epmleados con sueldo superor al promedio";
}
	 
void pro(int n, int n2)
{
	int r;
    if(n>n2)
    {
    	r++;
	}
}

