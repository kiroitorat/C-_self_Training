#include<iostream>

int JC(int val)
{
    if (val > 0 )
    {
        return val*JC(val-1);
    }
    
    return 1;
}



int main()
{
    int num = JC(4);
    std::cout<<num;
}