#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int temp[51],n;
	int i;
	for(i=1;i<=50;i++)
	{
	cout<<"ingrese el numero #"<<i<<" ";
	cin>>temp[i];
	}
	for(i=1;i<=50;i++)
	{
		if(temp[i]==0)
		{
			cout<<"el numero "<<temp[i]<<" es neutro"<<endl;
		}
		else if(temp[i]%2==0)
		{
			cout<<"el numero "<<temp[i]<<" es par"<<endl;
			if(temp[i]>0)
			{
				cout<<"el numero "<<temp[i]<<" es positivo"<<endl;
			}
			else
			{
				cout<<"el numero "<<temp[i]<<" es negativo"<<endl;
			}
		}
		else
		{
			cout<<"el numero "<<temp[i]<<" es ipar"<<endl;
			if(temp[i]>0)
			{
				cout<<"el numero "<<temp[i]<<" es positivo"<<endl;
			}
			else
			{
				cout<<"el numero "<<temp[i]<<" es negativo"<<endl;
			}
		}
	}
}
