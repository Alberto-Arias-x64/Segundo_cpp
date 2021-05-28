#include<iostream>
#include<math.h>
using namespace std;
main()
{
	double ampers[16],n;
	int i;
	for(i=1;i<=16;i++)
	{
		cout<<"ingrese el amperaje #"<<i<<" ";
		cin>>ampers[i];	
	}
	i=0;
	for(i=1;i<=16;i++)
	{
		cout<<"el numero en el arreglo "<<i<<" es "<<ampers[i]<<endl;
	}
}
