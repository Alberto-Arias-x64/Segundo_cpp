#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int x[4][13],f,c,n=0,d,m,mes[13],s;
	for(c=1;c<4;c++)
	{
		for(f=1;f<13;f++)
		{
			cout<<"ingrese el dato de el "<<c<<" departamento ";
			cin>>x[c][f];
		}
	}
	cout<<" "<<endl;
	for(c=1;c<4;c++)
	{
		for(f=1;f<13;f++)
		{
			cout<<x[c][f];
			if(n<=x[c][f])
			{
				n=x[c][f];
				d=f;
			}
		}
		cout<<endl;
	}
	cout<<"el mayor costo de producion fue "<<n<<" el mes "<<d<<endl;
	n=0;
	for(c=1;c<4;c++)
	{
		for(f=1;f<13;f++)
		{
			n=n+x[c][f];
		}
		mes[c]=n/31;
		n=0;
	}
	for(c=1;c<4;c++)
	{
		cout<<"el promedio del mes "<<c<<" fue de "<<mes[c]<<endl;
	}
	n=0;
	for(c=1;c<4;c++)
	{
		if(n>=mes[c])
		{
			n=mes[c];
			s=c;
		}
	}
	cout<<"el mes "<<s<<" supero el promedio mensual";
	n=0;
	s=0;
	for(c=1;c<4;c++)
	{
		if(n<=mes[c])
		{
			n=mes[c];
			s=c;
		}
	}
	cout<<"el mes "<<s<<" fue infeerior el promedio mensual";
}
