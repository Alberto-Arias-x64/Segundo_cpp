#include<iostream>
using namespace std;
main()
{ 
int a,b,x,y,z;
  cout<<"ingrese el valor de x"<<endl;
  cin>>x;
  cout<<"ingrese el valor de y"<<endl;
  cin>>y;
  cout<<"ingrese el valor de z"<<endl;
  cin>>z;
    if (x>y && x>z)
  { 
  cout<< x <<" es el mayor"<<endl;
  }
  else if (y>x && y>z)
  { 
  cout<< y <<" es el mayor"<<endl;
  }
  else if (z>x && z>y)
  { 
  cout<< z <<" es el mayor"<<endl;
  }
}
