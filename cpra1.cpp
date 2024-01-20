#include <iostream>
using namespace std;
int addNumber( int aman, int ram)
{
    int result=aman+ram;
    return result;
}
int main(){
    int first_number;
    int second_number;
    cout<<"enter a number";
    cin>>first_number>>second_number;
    cout<<"First Number:"<<first_number<<endl;
    cout<<"Second Number:"<<second_number<<endl;
    int sum=first_number+second_number;
    cout<<"Sum:"<<sum<<endl;

    sum=addNumber(23,4);
    cout<<"Sum:"<<sum<<endl;

    cout<<"Sum:"<<addNumber(23,2)<<endl;

    return 0;
}