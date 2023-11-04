#include<iostream>
#include<vector>
#include<algorithm>

std::vector<int> get_Binary(int val)
{
    std::vector<int> arr;
    while (val >= 1)
    {
        int temp = val%2;
        arr.push_back(temp);
        val = val/2;
    }
    std::reverse(arr.begin() , arr.end());
    return arr;
}

void myPrint(int val)
{
    std::cout<<val;
}

void print_Binary(std::vector<int> arr)
{
    std::for_each(arr.begin() , arr.end() , myPrint);
}

int fast_power(int jishu , int mishu)
{
    std::vector<int> my_Binary = get_Binary(mishu);
    int res = 0;
    for (int i = 0; i < my_Binary.capacity(); i++)
    {
        int temp = my_Binary[i];
        if (temp == 1)
        {
            jishu *=jishu;
            res += jishu;
        }else{
            res += 1;
        }
    }
    return res;
    
}

int main()
{
    int res = fast_power(3,2);
    std::cout<<res;
}