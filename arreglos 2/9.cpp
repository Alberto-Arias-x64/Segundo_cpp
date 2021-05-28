#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int fmax[13],p;
	int i;
	for(i=1;i<=12;i++)
	{
		cout<<"ingrese las toneladas del mes #"<<i<<" ";
		cin>>fmax[i];
		p=p+fmax[i];
	}
	p=p/12;
	cout<<"el promedio de cosecha es de "<<p<<endl;
	for(i=1;i<=12;i++)
	{
		if(p<fmax[i])
		{
			cout<<"el mes #"<<i<<" tuvo mayor cosecha que el promedio"<<endl;
		}
		if(fmax[i]<p)
		{
			cout<<"el mes #"<<i<<" tuvo menor cosecha que el promedio"<<endl;
		}
	}
}
