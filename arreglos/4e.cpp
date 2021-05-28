#include<iostream>
#include<math.h>
using namespace std;
main()
{
	double velocidad[25],n;
	int i;
	for(i=1;i<=25;i++)
	{
		cout<<"ingrese la velocidad #"<<i<<" ";
		cin>>velocidad[i];	
	}
	i=0;
	for(i=1;i<=25;i++)
	{
		if(i==1 || i==3 || i==7)
		{
			cout<<"el numero en el arreglo "<<i<<" es "<<velocidad[i]<<endl;
		}
	}
}
