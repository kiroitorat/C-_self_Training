#include<vector>
#include <unordered_map>
#include<algorithm>
using namespace std;


//map
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> m;//这个map支持随机访问
        for (int i = 0; i < nums.size(); i++)
        {
            auto it = m.find(target-nums[i]);
            if (it != m.end())
            {
                return {it->second , i};
            }
            m[nums[i]] = i;//{key:nums[i] , val:i}
            
        }
        return {};
    }
};


//双指针
class Solution2
{
public:
    vector<int> twoSum2(vector<int>& nums, int target)
    {
        sort(nums.begin() , nums.end());
        auto pr1 = nums.begin();
        auto pr2 = nums.end()-1;
        while(pr1 < pr2)
        {
            if (target < *pr1 + *pr2)
            {
                --pr2;
            }else if (target > *pr1 + *pr2)
            {
                ++pr1;
            }else
            {
                return {static_cast<int>(pr1 - nums.begin()), static_cast<int>(pr2 - nums.begin())};
            }
            
            
        }
        return {};
    }
};




int main(){}