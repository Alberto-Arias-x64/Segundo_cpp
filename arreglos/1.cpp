#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int temp[9],n;
	int i;
	for(i=1;i<=8;i++)
	{
	cout<<"ingrese la temperatura #"<<i<<" ";
	cin>>temp[i];
	}
	for(i=1;i<=8;i++)
	{
	cout<<" la temperatura #"<<i<<" es de "<<temp[i]<<endl;
	n=n+temp[i];
	}
	n=n/8;
	cout<<" la temperatura promedio es de "<<n;
}
