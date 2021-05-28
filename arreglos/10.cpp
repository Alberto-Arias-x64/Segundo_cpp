#include<iostream>
#include<math.h>
using namespace std;
main()
{
	double voltaje[11],corriente[11],resistencia[11],n;
	int i;
	for(i=1;i<=10;i++)
	{
		cout<<"ingrese la corriente #"<<i<<" ";
		cin>>corriente[i];
		cout<<"ingrese la resistencia #"<<i<<" ";
		cin>>resistencia[i];
		voltaje[i]= resistencia[i]*corriente[i];
	}
	for(i=1;i<=10;i++)
	{
		cout<<"el votaje #"<<i<<" es de "<<voltaje[i];
		cout<<", la corriente es de "<<corriente[i];
		cout<<", la resistencia es de "<<resistencia[i]<< endl;
	}
}
