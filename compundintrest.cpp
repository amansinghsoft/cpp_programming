#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float p,r,t,ci;
	cout<<"enter th value of p,r,t:\n";
	cin>>p>>r>>t;
    ci=p* (pow((1 + r/ 100),t));
    cout<<"compound interest = "<<ci;

    return 0;
}

