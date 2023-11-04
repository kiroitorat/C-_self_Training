using namespace std;

class Solution {
public:
    int smallestRepunitDivByK(int k) {
        //1，11，111，1111，11111.....
        //观察可知，11=1*10+1，111=11*10+1.......
        //前一个为n，后一个就是10n+1
        
        //特殊情况直接返回-1
        if (k % 2 == 0 || k % 5 == 0)
        {
            return -1;
        }

        int count = 1;
        int num = 0;
        while (num < 10000000000)
        {
            
            num = (10*num + 1) % k;//?不懂，为什么可以这样做
            if (num == 0 )
            {
                return count;
            }
            count++;
            
        }
        return -1;
    }
};