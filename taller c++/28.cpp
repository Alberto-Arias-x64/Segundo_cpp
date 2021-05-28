#include<iostream>
using namespace std;
main()
{ 
  char cl;
  float r, op1, op2;
  cout<<"+ suma"<<endl;
  cout<<"- resta"<<endl;
  cout<<"* multiplicacion"<<endl;
  cout<<"/ division"<<endl;
  cout<<"ingrese la clave ";
  cin>>cl;
  cout<<"ingrese el primer numero ";
  cin>>op1;
  cout<<"ingrese el segundo numero ";
  cin>>op2;
  if (cl=='+')
  { r=op1+op2;
  cout<<"el resultado es "<<r<<endl;
  }
  else if (cl=='-')
  {r=op1-op2;
  cout<<"el resultado es "<<r<<endl;
  }
   else if (cl=='*')
  {r=op1*op2;
  cout<<"el resultado es "<<r<<endl;
  }
  if (op2==0)
  { cout<<"error matematico"<<endl;
  }
  else if (cl=='/')
  {
   r=op1/op2;
   cout<<"el resultado es "<<r<<endl;
  }
system ("pause");
}
