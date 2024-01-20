#include<iostream>
using namespace std;

void ram(int max){
    int x=0,y=1, z , i;
    cout<<x<<" "<<y<<" ";
    for(i=2;i<max;++i)
    {
        z=x+y;
       
        cout<<z<<" ";
        x=y;
        y=z;
    }
    cout<<endl;
   cout<<"--------------------------"<<endl;
}
void aman(int a,int b){
    int sum ;
    sum=a+b;
    cout<< "is sum"<<sum;
    
}
int main()
{
    int max;
    cout<<"enter the no. of times: ";
    cin>>max;
    ram(max);

    int a,b;
    cout<<"Enter the value of a and  b"<<endl;
    cin>>a>>b;
    aman(a,b);
    
}
