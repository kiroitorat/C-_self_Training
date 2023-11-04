#include<iostream>
using namespace std;
enum em{c,p,t,g};
void backlog(char);
int main(){
    cout<<"请输入以下四种的其中一种:\t"<<endl;
    cout<<"c) car  p)pc  t)tui g)gun"<<endl;
    char op;
    cin>>op;
    while (!isalpha(op)){
        cout<<"enter again!"<<endl;
        cin>>op;
    }
    backlog(op);
    return 0;


    
    
}
void backlog(char op)
{
    switch(op)
    {
        case 'c':cout<<"car!\t"<<endl;
        break;
        case 'p':cout<<"pc!\t"<<endl;
        break;
        case 't':cout<<"tui!\t"<<endl;
        break;
        case 'g':cout<<"gun!\t"<<endl;
        break;
    }
}