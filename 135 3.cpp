#include<iostream>
using namespace std;
int  main(){
    int sum;
    int n;
    cin>>n;
    while (n!=0)
    {
        sum+=n;
        cout<<sum<<endl;
        cin>>n;
    }
   
    return 0;
}