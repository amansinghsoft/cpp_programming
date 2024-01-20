#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter numbers for testing"<<endl;
    cin>>a>>b;
    c=a!=b ; //we use '!=' for notequal,and '==' for equal to.
    d=a==b;
    cout<<"the result of" << a <<"and" << b <<"is:" << c<<endl;
    cout<<"the result is:"<<d;
    return 0;
}