#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int temp[25],n,x,y;
	int i;
	x=0;
	y=99;
	for(i=1;i<=24;i++)
	{
	cout<<"ingrese la temperatura #"<<i<<" ";
	cin>>temp[i];
	}
	for(i=1;i<=24;i++)
	{
		cout<<" la temperatura #"<<i<<" es de "<<temp[i]<<endl;
		n=n+temp[i];
		if(temp[i]>x)
		{
			x=temp[i];
		}
		if(temp[i]<y)
		{
			y=temp[i];
		}
	}
	n=n/24;
	cout<<" la temperatura promedio es de "<<n<<endl;
	cout<<" la temperatura mas alta es de "<<x<<endl;
	cout<<" la temperatura mas baja es de "<<y<<endl;
}
