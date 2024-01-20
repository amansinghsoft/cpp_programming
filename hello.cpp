#include <iostream>
using namespace std;
class abc{
    int a,b,c;
    public:

    abc(int A, int B){
        a = A;
        b = B;
        c =a+b;
    }
    void display(){
        cout<<"The sum is:"<<c<<endl;

    }
};
int main(){
    abc obj1(2,3);
    obj1.display();
    return 0;
}
