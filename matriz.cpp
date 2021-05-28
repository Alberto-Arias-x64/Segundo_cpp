#include <iostream>
using namespace std;

int x1,y1,x2,y2,a,b,p=0;

int main()
{
	int m1[20][20];
	int m2[20][20];
	int mt[20][20];
	
	cout<<"introduzca el numero de filas de la primera matriz: ";
	cin>>x1;
	cout<<"introduzca el numero de columnas de la primera matriz: ";
	cin>>y1;
	cout<<endl;
	cout<<"introduzca el numero de filas de la segunda matriz: ";
	cin>>x2;
	cout<<"introduzca el numero de columnas de la segunda matriz: ";
	cin>>y2;
	
	if(x1==x2 && y1==y2)
	{
		cout<<endl;
		cout<<"la matriz se escrive de la siguiente manera"<<endl;
		cout<<" |[1][2][3]|"<<endl;
		cout<<" |[4][5][6]|"<<endl;
		cout<<" |[7][8][9]|"<<endl;
		cout<<endl;
		
		for(a=0;a<x1;a++)
		{
			for(b=0;b<y1;b++)
			{
				cout<<"dato matriz 1: ";
				cin>>m1[a][b];
			}
		}
		//--------------------------------------------------------------
		cout<<endl;
		
		for(a=0;a<x2;a++)
		{
			for(b=0;b<y2;b++)
			{
				cout<<"dato matriz 2: ";
				cin>>m2[a][b];
			}
		}
		cout<<endl;
		for(a=0;a<x2;a++)
		{
			for(b=0;b<y2;b++)
			{
				mt[a][b]=m1[a][b]+m2[a][b];
			}
		}
		cout<<endl;
		
		for(a=0;a<x2;a++)
		{
			cout<<"|";
			for(b=0;b<y2;b++)
			{
				cout<<m1[a][b]<<" ";
			}
			cout<<"|   +    |";
			for(b=0;b<y2;b++)
			{
				cout<<m2[a][b]<<" ";
			}
			cout<<"|   =    |";
			for(b=0;b<y2;b++)
			{
				cout<<mt[a][b]<<" ";
			}
			cout<<"|"<<endl;
		}
	}
	else
	{
		while(p!=20)
		{
			cout<<"MATH ERROR"<<endl;
			p++;
		}
	}
}
