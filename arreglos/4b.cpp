#include<iostream>
#include<math.h>
using namespace std;
main()
{
	double vol[10],n;
	int i;
	for(i=1;i<=10;i++)
	{
		cout<<"ingrese el voltaje #"<<i<<" ";
		cin>>vol[i];	
	}
	i=0;
	for(i=1;i<=10;i++)
	{
		if(i==1 || i==3 || i==7)
		{
			cout<<"el numero en el arreglo "<<i<<" es "<<vol[i]<<endl;
		}
	}
}
