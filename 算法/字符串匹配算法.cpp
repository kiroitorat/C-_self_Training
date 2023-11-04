#include<string>
#include<iostream>

//暴力算法
std::string violent(std::string mainString , std::string subString)
{
    int left = 0;
    std::string myString = NULL;
    for (int i = 0; i < mainString.length(); i++)
    {
        if (mainString[i] == subString[left])
        {
            myString.assign
            left++;
        }
        
    }
    
    return myString;
}


int main()
{

    std::string mainString = "kiroitorat";
    std::string subString = "kiroito";
    std::cout<<violent(mainString , subString);
    system("pause");
}