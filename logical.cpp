/*  ! for not
    && for and
    || for or*/
#include <iostream>
using namespace std;
 int main(){
    bool redlight{false};
    bool greenlight{false};
    cout<<boolalpha; 
        cout<<"stop!"<<(redlight||greenlight)<<endl;
        cout<<"go!"<<(greenlight||redlight)<<endl;
    return 0;
}

