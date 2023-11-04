#include<iostream>
#include<ctime>
using namespace std;
int main(){
    float secs;
    cin>>secs;
    clock_t delay = secs*CLOCKS_PER_SEC;
    cout<<"starting\a\n";
    clock_t start = clock();//clock()是系统时钟的意思，既是系统内置的计时器
    while (start<delay)
    ;

    cout<<"done!";
    return 0;
  
    
}