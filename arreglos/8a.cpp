#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int fmax[10],n;
	int i;
	n=0;
	for(i=1;i<=10;i++)
	{
		cout<<"ingrese el numero #"<<i<<" ";
		cin>>fmax[i];
		if(n<fmax[i])
		{
			n=fmax[i];
		}
	}
	cout<<"el numero mayor es "<<n<<endl;
}
