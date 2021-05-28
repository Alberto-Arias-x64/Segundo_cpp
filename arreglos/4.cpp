#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float cal[51],n,x,z;
	int i;
	for(i=1;i<=50;i++)
	{
		cout<<"ingrese la calificacion #"<<i<<" ";
		cin>>cal[i];
		n=n+cal[i];
	}
	n=n/50;
	cout<<"el pormedio general del grupo es "<<n<<endl;
	i=0;
	for(i=1;i<=50;i++)
	{
		if(cal[i]>=3)
		{
			x++;
			if(cal[i]>=4)
			{
				cout<<"el alumno #"<<i<<"es un nerdo con nota de "<<cal[i]<<endl;
			}
		}
	}
	z=50-x;
	x=(x/50)*100;
	z=(z/50)*100;
	cout<<"el "<<x<<"% de los alumnos paso"<<endl;
	cout<<"el "<<z<<"% de los alumnos reprovo"<<endl;
}
