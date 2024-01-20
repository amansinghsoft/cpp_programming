#include <iostream>
using namespace std;
int main(){
	char myValue ;
	cout<<"Please enter a alfabetical charector: ";
	cin>>myValue;
	
	if(myValue == 'a' || myValue == 'e' || myValue == 'i' || myValue == 'o' || myValue == 'u'){
		cout<<"The Charector is a Vowel."<<myValue;
	}else{
		cout<<"The Charector %c is a Consonent."<< myValue;
	}
	return 0;
}