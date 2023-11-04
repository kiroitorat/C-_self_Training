#include<iostream>
using namespace std;
const int strsize = 100;
void make_bop(void)
struct bop{char fullname[strsize];char title[strsize];char bop_name[strsize];int preference;};
int main()
{ 
    make_bop;
    char choice;
    cout<<"a. name b. title"<<endl<<"c. bop_name"<<"d. preference"<<"q. quit!"<<endl;
    x:
    {
        cout<<"选择吧！";
        cin>>choice;
        while (!isalpha(choice))
        {
            cout<<"选择一个字母吧，求求了！";
            cin>>choice;
        }
    }
    switch (choice)
    {
        case a:
            cout<<people[o].fullname<<endl<<people[1].fullname<<endl<<people[2].fullname<<endl;/* code */
            goto x;
        case b:
             cout<<people[o].title<<endl<<people[1].title<<endl<<people[2].title<<endl;
             goto x;
        case c:
            cout<<people[o].name<<endl<<people[1].name<<endl<<people[2].name<<endl;
            goto x;
        case d:
            cout<<people[o].preference<<endl<<people[1].preference<<endl<<people[2].preference<<endl;
        case q:
            cout<<"Bye!";
            break;
    }
    
    return 0;
}
void make_bop(){
    bop people[2];
    people[0]={
        fullname='KiotoRat';
        title='killer';
        bop_name='sha_bi';
        preference=0;
    };
    people[1]={
        fullname='Kioto';
        title='maker';
        bop_name='si_bi';
        preference=1;
    };
    people[2]={
        fullname='K';
        title='ChouBi';
        bop_name='NT';
        preference=2;
    };

}