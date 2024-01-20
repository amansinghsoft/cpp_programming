// To find the root of quadratic equation of one variable.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  float a,b,c,d,e,f; 
  cout<<"enter the values of number:";
  cin>>a>>b>>c;
  d=b*b-4*a*c;   //d=discriminant
  if(d>0)
  {
   e=(-b + sqrt(d)) / (2 * a); 
   f=(-b - sqrt(d)) / (2 * a);
   cout<<"the root1="<<e<<endl<<"the root2="<<f; 
  }
  else if(d==0)
  { e = f = -b / (2 * a);
   cout<<"the root1="<<e<<endl<<"the root2="<<f;
  }
  else{
   cout<<"invalid";
  }

}
