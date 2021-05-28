#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int x[13][33],f,c,n=0,d,m,mes[13],s;
	for(c=1;c<13;c++)
	{
		for(f=1;f<32;f++)
		{
			cout<<"ingrese el dato ";
			cin>>x[c][f];
		}
	}
	cout<<" "<<endl;
	for(c=1;c<13;c++)
	{
		for(f=1;f<32;f++)
		{
			cout<<x[c][f];
			if(n<=x[c][f])
			{
				n=x[c][f];
				d=f;
				m=c;
			}
		}
		cout<<endl;
	}
	cout<<"la temperatura mas alta fue el "<<n<<" el dia "<<d<<" y el mes "<<m<<endl;
	n=0;
	for(c=1;c<13;c++)
	{
		for(f=1;f<32;f++)
		{
			n=n+x[c][f];
		}
		mes[c]=n/31;
		n=0;
	}
	for(c=1;c<12;c++)
	{
		cout<<"el promedio del mes "<<c<<" fue de "<<mes[c]<<endl;
	}
	n=0;
	for(c=1;c<13;c++)
	{
		if(n>=mes[c])
		{
			n=mes[c];
			s=c;
		}
	}
	cout<<"el mes "<<s<<" supero el promedio mensual";
}
