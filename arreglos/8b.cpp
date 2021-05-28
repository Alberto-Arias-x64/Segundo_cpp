#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int fmax[10],n,x;
	int i;
	for(i=1;i<=10;i++)
	{
		cout<<"ingrese el numero #"<<i<<" ";
		cin>>fmax[i];
		if(n<fmax[i])
		{
			n=fmax[i];
			x=i;
		}
	}
	cout<<"el numero mayor es "<<n<<endl;
	cout<<"este es el elemento numero #"<<x<<" en la lista de numeros";
}
