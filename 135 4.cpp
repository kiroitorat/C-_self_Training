#include<iostream>
using namespace std;
int  main(){
    double o1 = 100;
    double o2 = 100;
    double lx1=0;
    double lx2=0;
    int years=1;

    
    
    lx1=0.10*o1;
    lx2=0.05*(lx2+o2);
    while (lx1>lx2){
        lx1+=0.10*o1;
        lx2+=0.05*(lx2+o2);
        years++;
    }
    cout<<"用了"<<years<<"年";
    cout<<"lx1="<<lx1<<endl<<"lx2="<<lx2;
    return 0;
    

}