#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int fmax[51],n,x;
	int i;
	n=0;
	for(i=1;i<=50;i++)
	{
		cout<<"ingrese el numero #"<<i<<" ";
		cin>>fmax[i];
		if(n<=fmax[i])
		{
			if(n==fmax[i])
			{
				x++;
			}
			else
			{
				x=1;
			}
			n=fmax[i];
		}
	}
	cout<<"el numero mayor es "<<n<<endl;
	cout<<"el numero mayor se repite "<<x<<" veces"<<endl;
}
