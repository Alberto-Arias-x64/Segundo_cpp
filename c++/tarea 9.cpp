#include<iostream>
using namespace std;
main()
{ int x,y,z;

  cout<<"ingrese tres numeros";
  cin>>x>>y>>z;
  
  if (x>y)
  { cout<< x <<"es el mayor"<<endl;
  }
  //else if (x<y) 
  //{ cout<< y <<"es el mayor"<<endl;
  //}
  else if (y>z)
  { cout<< y <<"es el mayor"<<endl;
  }
  else if (y<z)
  { cout<< z <<"es el mayor"<<endl;
  }
  //if (x>z)
  //{ cout<<x<<"es el mayor"<<endl;
  //}
  else if (x<z) 
  {cout<< z <<"es el mayor"<<endl;
  }
  system("pause");
}
