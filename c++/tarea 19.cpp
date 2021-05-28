#include<iostream>
#include<math.h>
using namespace std;
main()
{
      float a,b,c,s,ar;
      cout<<"ingrese los lados del trialgulo"<<endl;
      cout<<"primer lado"<<endl;
      cin>>a;
      cout<<"segundo lado"<<endl;
      cin>>b;
      cout<<"tercer lado"<<endl;
      cin>>c;
      s=(a+b+c)/2;
      ar=(s*(s-a)*(s-b)*(s-c))/2;
      cout<<"el area total es"<<ar<<endl;
      system("pause");
}
    
