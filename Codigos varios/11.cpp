#include<iostream>
using namespace std;
main()
{
	float A,B;
	cout<<"ingrese la base del primer trapesio"<<endl;
	cin>>A;
	cout<<"ingrese la base del segundo trapesio"<<endl;
	cin>>B;
	
	if (A==B)
	{
		cout<<"el trapesio es isoceles"<<endl;
	}	
	else if (A!=B)
	{
		cout<<"el trapesio no es isoceles"<<endl;
	}

}

