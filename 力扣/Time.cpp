#include<iostream>
#include<string>
using namespace std;

class Solution
{
public:
    int countTime(string time)
    {
        char a = time[0];
        char b = time[1];
        char c = time[3];
        char d = time[4];

        int count = 1;

        if (d == '?')
        {
            count *= 10;
        }
        
        if (c == '?')
        {
            count *= 6;
        }
        
        if (a == '?' && b == '?')
        {
            count *= 24;
        }
        
        if (a == '?' && b != '?')
        {

            if (b >= '5')
            {
                count *= 2;
            }else{
                if (b == '4' && (c > '0' || d > '0'))
                {
                    count *= 2;
                }else count *= 3;
                
            }

        }
        
        if (a == '0' && b == '?')
        {
            count *= 10;
        }

        if (a == '1' && b == '?')
        {
            count *= 10;
        }

        if (a == '2' && b == '?')
        {
            count *= 4;
        }

        return count;   
    }
};


int main(){}