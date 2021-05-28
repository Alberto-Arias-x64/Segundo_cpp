#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int x[5][5],f,c;
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
		}
		cout<<endl;
	}
	cout<<" "<<endl;
	for(f=0;f<5;f++)
	{
		for(c=0;c<5;c++)
		{
			cout<<x[c][f];
		}
		cout<<endl;
	}
}
