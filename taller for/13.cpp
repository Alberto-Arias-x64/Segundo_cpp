#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int i;
	for(i=-50; i<=50; i++)
	{
		if(i<0)
		{
			cout<<"el numero "<<i<<" es negativo"<<endl;
		}
		else if(i==0)
		{
			cout<<"el numero "<<i<<" es neutro"<<endl;
		}
		else
		{
			cout<<"el numero "<<i<<" es positivo"<<endl;
		}
	}
}
