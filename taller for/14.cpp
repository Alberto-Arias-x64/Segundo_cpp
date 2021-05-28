#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int i,n;
	cout<<"escriva un numero ";
	cin>>n;
	for(i=1; i<=n; i++)
	{
		if(i%2==0)
		{  
        cout<<i<<" es par"<<endl;  
        }
	    else
		{  
        cout<<i<<" es impar"<<endl;  
        }  
	}
}
