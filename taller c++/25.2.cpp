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
  cout<<"ingrese el valor de a"<<endl;
  cin>>a;
  cout<<"ingrese el valor de b"<<endl;
  cin>>b;
    if (x>y && x>z && x>a && x>b)
  { 
  cout<< x <<" es el mayor"<<endl;
  }
  else if (y>x && y>z && y>a && y>b)
  { 
  cout<< y <<" es el mayor"<<endl;
  }
  else if (z>x && z>y && z>a && z>b)
  { 
  cout<< z <<" es el mayor"<<endl;
  }
  else if (a>x && a>y && a>z && a>b) 
  {
  cout<< a <<" es el mayor"<<endl;
  }
  else
  {
  cout<< b <<" es el mayor"<<endl;
  }
}
