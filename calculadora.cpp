#include <iostream>

using namespace std;

float x1,x2,xt,p;

int main()
{
	while(1)
	{
		int x;
		cout<<"CALCULADORA XD"<<endl;
		cout<<endl;
		cout<<" Que operacion desea realizar?"<<endl;
		cout<<" 1. Suma"<<endl;
		cout<<" 2. Resta"<<endl;
		cout<<" 3. Multiplicaion"<<endl;
		cout<<" 4. Division"<<endl;
		cout<<" 5. Salir"<<endl;
		cout<<" Introdusca el codigo : ";
		cin>>x;
		if(x==5)
		{
			break;
		}
		cout<<"introdusca el primer valor : ";
		cin>>x1;
		cout<<"introdusca el segundo valor : ";
		cin>>x2;
		switch(x)
		{
			case 1:{
				xt=x1+x2;
				cout<<"la respuesta es: "<<xt;
				break;
			}
			case 2:{
				xt=x1-x2;
				cout<<"la respuesta es: "<<xt;
				break;
			}
			case 3:{
				xt=x1*x2;
				cout<<"la respuesta es: "<<xt;
				break;
			}
			case 4:{
				if(x2>0)
				{
					xt=x1/x2;
					cout<<"la respuesta es: "<<xt;
				}
				else
				{
					cout<<"error";
				}
				break;
			}
			default:
				{
					cout<<"error";
				break;
				}
		}
		cout<<endl;
		cout<<"introduzca cualquier numero para continuar ";
		cin>>p;
		system("cls");
	}
}
