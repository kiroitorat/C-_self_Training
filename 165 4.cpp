#include<iostream>
using namespace std;
const int strsize = 10;
struct bop{char fullname[strsize];char title[strsize];char bop_name[strsize];int preference;};
int main()
{ 
    bop people[3]=
    {
        {"KiotoRat","killer","sha_bi",0},
        {"Kioto","maker","si_bi",1},
        {"K","ChouBi","NT",2}
    };
    // people[0]={
    //     people.fullname='KiotoRat';
    //     title='killer';
    //     bop_name='sha_bi';
    //     preference=0;
    // };
    // people[1]={
    //     fullname='Kioto';
    //     title='maker';
    //     bop_name='si_bi';
    //     preference=1;
    // };
    // people[2]={
    //     fullname='K';
    //     title='ChouBi';
    //     bop_name='NT';
    //     preference=2;
    
    char choice;
    cout<<"a. name b. title\t"<<endl<<"c. bop_name d. preference\t"<<"q. quit!"<<endl;
    start:cout<<"选择吧！";
    cin>>choice;
    while (!isalpha(choice))
    {
        cout<<"选择一个字母吧，求求了！";
        cin>>choice;
    }
    
    switch (choice)
    {
        case 'a':
            cout<<people[0].fullname<<endl<<people[1].fullname<<endl<<people[2].fullname<<endl;
            goto start;
        case 'b':
            cout<<people[0].title<<endl<<people[1].title<<endl<<people[2].title<<endl;
            goto start;
        case 'c':
            cout<<people[0].bop_name<<endl<<people[1].bop_name<<endl<<people[2].bop_name<<endl;
            goto start;
        case 'd':
            cout<<people[0].preference<<endl<<people[1].preference<<endl<<people[2].preference<<endl;
            goto start;
        case 'q':
            cout<<"Bye!";
            goto start;
    }
    
    return 0;
}
