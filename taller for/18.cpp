#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float i,n,r,x;
	cout<<"ingrese el divisor ";
	cin>>x;
	for(i=1; i<=x; i++)
	{
		r=1/i;
		cout<<"1 dividido "<<i<<" = "<<r<<endl;
	}
}
