#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int temp[8],n;
	int i;
	n=0;
	for(i=1;i<=8;i++)
	{
		cout<<"ingrese la temperatura #"<<i<<" ";
		cin>>temp[i];	
	}
	for(i=1;i<=8;i++)
	{
		cout<<"la temperatura #"<<i<<" fue de "<<temp[i]<<endl;
		n=n+temp[i];
	}
	n=n/8;
	cout<<"el promedio dela temperatura total fue de "<<n<<endl;
}
