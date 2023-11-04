#include<iostream>
#include<cstring>
using namespace std;
struct CandyBar{string band;double weight;int kll;};
int main(){
    CandyBar snack={"Mocha Munch",2.3,350};
    cout<<snack.band<<endl<<snack.weight<<endl<<snack.kll;
    return 0;

}