#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int fmax[15],n,x,des[15];
	int i;
	n=0;
	for(i=1;i<=14;i++)
	{
		cout<<"ingrese la nota #"<<i<<" ";
		cin>>fmax[i];
		n=n+fmax[i];
	}
	cout<<"la sumatoria de las notas es "<<n<<endl;
	n=n/14;
	cout<<"el promedio de las notas es "<<n<<endl;
	i=0;
	for(i=1;i<=14;i++)
	{
		des[i]=fmax[i]-n;
		cout<<"la desviacion estandar de la nota #"<<i<<" es de "<<des[i]<<endl;
	}
}
