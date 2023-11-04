#include<iostream>
#include<ctime>

class myFBNQ:thread
{
public:
    int val;
    int FBNQ(int n)
    {
        if (n == 0) return 0 ;
        if (n == 1) return 1;
        return FBNQ(n-1) + FBNQ(n-2); 
    }

};



int DTfib(int n)
{
    if (n<=1) return n;

    int dp[n+1];
    dp[0] =0 ; dp[1] = 1;

    for (int i = 2; i < n; i++)
    {
        dp[n] = dp[n-1] + dp[n-2];
    }
    
    return dp[n];

}


int main()
{
    //int val = FBNQ(10);
    srand((unsigned int) time(NULL));
    int val = DTfib(10);
    std::cout<<val;
}