#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int emax[10],n,x;
	int i;
		n=999;
	for(i=1;i<=10;i++)
	{
		cout<<"ingrese el numero #"<<i<<" ";
		cin>>emax[i];
		if(emax[i]<n)
		{
			n=emax[i];
			x=i;
		}
	}
	cout<<"el numero menor es "<<n<<endl;
	cout<<"este es el elemento numero #"<<x<<" en la lista de numeros";
}
