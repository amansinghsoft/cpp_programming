#include<iostream>
using namespace std;

int main(){
char name[20];
double roll,cpp,dsa,ecs,de,sum;

cout<<"Enter your name :"<<endl;
cin>>name;
cout<<"Enter your roll number:"<<endl;
cin>>roll;
cout<<"Enter your marks in cpp:"<<endl;
cin>>cpp;
cout<<"Enter your marks in Dsa:"<<endl;
cin>>dsa;
cout<<"Enter your marks in Ecs:"<<endl;
cin>>ecs;
cout<<"Enter your number in de:"<<endl;
cin>>de;

cout<<"----------------------"<<endl;
cout<<"You are "<<" "<<name<<endl;
cout<<"Your Roll number is"<<" "<<roll<<endl; 
cout<<"Your got"<<"  "<<cpp<<"  "<<"in CPP."<<endl;
cout<<"Your got"<<"  "<<dsa<<"  "<<"in DSA."<<endl;
cout<<"Your got"<<"  "<<ecs<<"  "<<"in ECS."<<endl;
cout<<"Your got"<<"  "<<de<<"  "<<"in DE."<<endl;
sum=cpp+dsa+ecs+de;
double per=(sum/4);

if(per>90){
    cout<<"You got A+ grade.";
}
else if(per>80 && per<=90){
    cout<<"You got A grade.";
}
else if(per>70&&per<=80){
    cout<<"You got B grade.";
}
else if(per>60&&per<=70){
    cout<<"You got C grade.";
}
else if(per>50&&per<=60){
    cout<<"You got D grade.";
}
else if(per>33&&per<=50){
    cout<<"You got E grade.";
}
else{
    cout<<"You are FAIL.";
}

return 0;
}
