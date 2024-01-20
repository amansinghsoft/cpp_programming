#include <iostream>
#include<string>
using namespace std;
int main(){
    int age;
    std :: string full_name;
    cout<<"enter your name and age:"<<endl;
    
     getline(cin,full_name);
    cin>>age;
    cout<<"hello:"<<full_name<<"you are"<<age<<endl;
    cout<<"size of"<<sizeof(string);

    return 0; 
}