#include<iostream>
using namespace std;

int main(){
    int a=9,b=7;
    cout<<"before swapping a= "<<a<<endl<<"before swapping b= "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    
   
    cout<<"after swapping a= "<<a<<endl<<" after swapping b= "<<b;
}