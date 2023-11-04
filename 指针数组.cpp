#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int *pt = new int[10];




    cout<<"输出pt【】";
    for(int i = 0 ;i<10;i++){
        pt[i]=i;
        cout<<pt[i]<<endl;
    }



    cout<<"输出pt";
    for(int i = 0 ;i<10;i++){
        pt[i]=i;
        cout<<"*（pt+i）相当于pt[i]"<<*(pt+i)<<endl;
        cout<<(pt+i)<<endl;
    }
    cout<<"这说明pt[]储存的是值，pt是指针，指向地址，还说明了pt默认指向第一位地址，既pt[0]的地址,还说明了pt加上一个数得到的是地址加上这个数类型的字节数"<<endl<<"比如pt+1，就是pt加上字节数4的地址";
    return 0;
}