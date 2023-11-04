#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//笨方法
class Solution1 {
public:
    vector<string> sortPeople1(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        for(int i=0 ; i<n ; i++){
            for(int j = i +1 ; j < n ; j++){
                if(heights[i] < heights[j]){
                    swap(heights[i] , heights[j]);
                    swap(names[i] , names[j]);
                    
                }
            }
        }
        return names;
    }
};


//使用技巧
class Solution2 
{
public:
    vector<string> sortPeople2(vector<string>& names, vector<int>& heights)
    {
        //将名字和升高合二为一
        vector<pair<int , string>> combinationVector(names.size());
        for (int i = 0; i < names.size(); i++)
        {
            //将升高取负数，下面有技巧的使用，使用sort算法从小到大排序，这样取了负数之后，越小的反而其升高越高
            combinationVector[i] = {-heights[i] , names[i]};
        }
        sort(combinationVector.begin() , combinationVector.end());
        for (int j = 0; j < names.size(); j++)
        {
            names[j] = combinationVector[j].second;
        }
        return names;

    }
};


class Solution3//插入排序
{
public:
    vector<string> sortPeople3(vector<string>& names, vector<int>& heights)
    {
        for (int i = 1; i < names.size(); i++)
        {
            string temp1 = names[i];
            int temp2 = heights[i];
            int j = i;
            while (j>0 && temp2 > heights[j-1])
            {
                heights[j] = heights[j-1];
                names[j] = names[j-1];
                j--;
            }
            heights[j] = temp2;
            names[j] = temp1;
        }
        return names;
    }
};


//5.10插入排序

vector<string> sortPeople(vector<string>& names, vector<int>& heights)
{
    for (int i = 1; i < names.size(); i++)
    {
        string temp1 = names[i];
        int temp2 = heights[i];
        int j = i;

        while (j > 0 && temp2 > heights[j -1])
        {
            heights[j] = heights[j-1];
            names[j] = names[j-1];
            j--;
        }
        
        names[j] = temp1;
        heights[j] = temp2;

    }
    return names;
}



int main()
{
  
}