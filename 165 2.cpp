#include<iostream>
using namespace std;
int main(){
    double ar[9];
    int i =0;
    double sum;
    while(cin>>ar[i]){
        if(i<=9){
            sum+=ar[i];
            i++;
        }else{
            break;
        }
    }
    double aver=sum/9;
    cout<<"平均值是:"<<aver<<endl;
    int count=0;
    for (int m = 0; count<9; m++)
    {
        if(ar[m]>=aver){
            count++;
        }
            
    }
    cout<<"有："<<count<<"个数大于平均值";
    return 0;
}