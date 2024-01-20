#include <iostream>
using namespace std;
 int main(){
    bool redlight{true};
    bool greenlight{false};

    if(redlight==true){
        cout<<boolalpha; /*to print true or false insted of 1 or 0. 
        always use it on top of the statment.*/
        cout<<"stop!"<<redlight<<endl;

        cout<<sizeof(bool)<<endl; // to find the size of variable.
    }
    else{
        cout<<boolalpha;
        cout<<"go"<<greenlight;
    }
    return 0;   
}

