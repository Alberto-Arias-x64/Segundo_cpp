#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int x[5][5],f,c,n=1;
	for(c=0;c<5;c++)
	{
		for(f=0;f<5;f++)
		{
			cout<<"ingrese el dato ";
			cin>>x[c][f];
		}
	}
	cout<<" "<<endl;
	for(c=0;c<5;c++)
	{
		for(f=0;f<5;f++)
		{
			cout<<x[c][f];
			n=n*x[c][f];
		}
		cout<<endl;
	}
	cout<<"la multiplicacion es "<<n;
}
