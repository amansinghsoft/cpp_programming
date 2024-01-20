//program on airthematic operation
#include <iostream>
using namespace std;
    int main()
    {
    float a,b,ope;
    char c;
    cout<<"enter arithematic operators"<<endl;
    cin>>c;
    cout<<"enter the valur of two integer "<<endl;
    cin>>a>>b;
    switch(c)
    {
    case '+': ope=a+b;
    cout<<"the sum is "<<ope;
    break;
    case '-': ope=a-b;
    cout<<"the sub is "<<ope;
    break;
    case '*': ope=a*b;
    cout<<"the mul is "<<ope;
    break;
    case '/': ope=a/b;
    cout<<"the division is "<<ope;
    break;
    /*case '%': ope=a%b;
    cout<<"the modular is "<<ope;
    break;*/
    default:
    cout<<"default values";
    }
    return 0;
}