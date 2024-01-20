#include <iostream>
using namespace std;
int main()
{
    int i,a,sum=0;
    float avg;
    cout<<"inter the ten number:";
    for(a=1;a<=10;a++)
    {
        cout<<"Number -"<<a<<endl;
        cin>>i;
        sum+=i;
    }
    avg=sum/10.0;
    cout<<"the sum 10 number is :"<<sum<<endl<<" thr average is:"<<avg;
    return 0;
}