#include <iostream>
using namespace std;

int main(){
    float age ;
    cout<<"Enter age in year:";
    cin>>age;

	//Non const reference
	cout << std::endl;
	cout << "Non const reference : " << std::endl;
	
    float& ref_age{age};
    float& aman{ref_age};

	cout << "age : " << age << std::endl;
	cout << "ref_age : " << ref_age << std::endl;
	cout << "aman(ref_age): " <<aman << std::endl;
	
	//Can modify original variable through reference

	cout << std::endl;
	cout << "Modify original variable through reference : " << std::endl;
	
	aman=age*2.5; //Mofify through reference
	
	cout << "age : " << age << std::endl;
	cout << "ref_age : " << ref_age << std::endl;
    cout << "aman(ref_age) : " << aman << std::endl;

   //Simulating reference behavior with pointers
   //const int * const p_age {&age};
   //*p_age = 45;
	
   
    return 0;
}