#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int a,b,c,s,p,pr;
	cout<<"ingrese el valor de a"<<endl;
	cin>>a;
	cout<<"ingrese el valor de b"<<endl;
	cin>>b;
	cout<<"ingrese el valor de c"<<endl;
	cin>>c;
	s=a+b+c;
	p=s/3;
	pr=a*b*c;
	cout<<"ingrese el valor de la suma es "<<s<<endl;
	cout<<"ingrese el valor de el promedio es "<<p<<endl;
	cout<<"ingrese el valor de el producto es "<<pr<<endl;
	if(a<b && a<c)
	cout<<"el numero menor es "<<a<<endl;
	if(b<a && b<c)
	cout<<"el numero menor es "<<b<<endl;
	if(c<b && c<a)
	cout<<"el numero menor es "<<c<<endl;
}
