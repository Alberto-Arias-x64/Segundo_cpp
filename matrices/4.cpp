#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int x[3][3],f,c,n=0;
	for(c=0;c<3;c++)
	{
		for(f=0;f<3;f++)
		{
			cout<<"ingrese el dato ";
			cin>>x[c][f];
		}
	}
	cout<<" "<<endl;
	for(c=0;c<3;c++)
	{
		for(f=0;f<3;f++)
		{
			cout<<x[c][f];
			n=n+x[c][f];
		}
		cout<<"  la sumatoria de la fila es "<<n;
		n=0;
		cout<<endl;
	}
	cout<<" "<<endl;
	for(f=0;f<3;f++)
	{
		for(c=0;c<3;c++)
		{
			cout<<x[c][f];
			n=n+x[c][f];
		}
		cout<<"  la sumatoria de la columna es "<<n;
		n=0;
		cout<<endl;
	}
}
