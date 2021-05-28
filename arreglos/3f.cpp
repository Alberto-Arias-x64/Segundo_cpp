#include<iostream>
#include<math.h>
using namespace std;
main()
{
	double tiempo[100],n;
	int i;
	for(i=1;i<=100;i++)
	{
		cout<<"ingrese el tiempo #"<<i<<" ";
		cin>>tiempo[i];	
	}
	i=0;
	for(i=1;i<=100;i++)
	{
		cout<<"el numero en el arreglo "<<i<<" es "<<tiempo[i]<<endl;
	}
}
