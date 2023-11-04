#include<iostream>
using namespace std;
int  main(){
    cout<<"输入两个整数，建议前面的更小捏";
    int n1,n2;
    int sum;
    cin>>n1;
    cin>>n2;
    for(int i =n1;i<=n2;i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}