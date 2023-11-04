#include<iostream>
#include<cstring>

int main(){
    using namespace std;
    char n1[10];
    string n2;
    char grade;
    int age;
    cout<<"What's your first name?";
    cin.getline(n1,10);
    cout<<n1;
    cout<<"What's your last name?"<<endl;
    cin>>n2;
    cout<<"What letter grade do you reserve?"<<endl;
    cin>>grade;
    cout<<"What's your age?"<<endl;
    cin>>age;
    cout<<"Name:"<<n2<<",";
    cout<<n1<<endl;
    cout<<"Grade:"<<grade<<endl;
    cout<<"Age:"<<age;
    return 0;
}