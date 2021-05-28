#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int distancia[16],n;
	int i;
	for(i=1;i<=15;i++)
	{
		cout<<"ingrese la distancia #"<<i<<" ";
		cin>>distancia[i];	
	}
	i=0;
	for(i=1;i<=15;i++)
	{
		if(i==1 || i==3 || i==7)
		{
			cout<<"el numero en el arreglo "<<i<<" es "<<distancia[i]<<endl;
		}
	}
}
