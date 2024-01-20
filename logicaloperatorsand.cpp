#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter numbers for testing"<<endl;
    cin>>a>>b;
    c=a!=b && a>b; 
    cout<<"the result of "<<a <<" and"<< b<<" is"<< c;
    return 0;
}