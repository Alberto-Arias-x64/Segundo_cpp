#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int i,n,r,x;
	cout<<"ingrese el multiplicador ";
	cin>>x;
	for(i=1; i<=100; i++)
	{
		n=i;
		r=n*x;
		cout<<i<<" por "<<x<<" = "<<r<<endl;
	}
}
