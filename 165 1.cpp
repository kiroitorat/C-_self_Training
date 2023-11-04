#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char ch = 0;
    while ((ch = cin.get()) != '@')
    {
        if (isdigit(ch))
        {
            continue;//进入下一次循环
        } 
        else if (islower(ch))
        {
            cout << (char)toupper(ch);
        }
        else if (isupper(ch))
        {
            cout << (char)tolower(ch);
        }
    }
 
    cout << "Done!" << endl;
    return 0;
    // cout<<"please enter some words"<<endl;
    // string str;
    // string cp[1000];
    // int sum=0;

    // int i = 0;
    // cin>>str;
    // cp[i]=str;

    // while (str!="@"){
    //     i++;
    //     sum++;
    //     cp[i]=str;
    //     cin>>str;
    // }
    // for(int m = 0 ;m<sum;m++){
    //     if(islower){
    //         toupper(cp[m],sum);
    //     }else{
    //         tolower(cp[m],sum)
    //     }
    //     cout<<cp[m]<<endl;
    // }
    // return 0;
    
}