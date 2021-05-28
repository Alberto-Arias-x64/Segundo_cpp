#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float x,r=1,ra=0,y;
	cout<<"ingrese el numero para fibonacci: ";
	cin>>x;
	cout<<ra<<" ";
	for(y=0; y<=x-2; y++)
	{
		cout<<r<<" ";
		r=ra+r;
		ra=r-ra;
	}
}
