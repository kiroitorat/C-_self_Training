#include<iostream>
#include<algorithm>
#include<vector>

//插入排序
template<typename Comparable>
class Solution1
{
    void InsertSort(Comparable arr[] , Comparable size)
    {
        for (int i = 0; i < size; i++)
        {
            //存入需要插入的元素
            Comparable temp = arr[i];
            int j = i;
            while (j>0 && temp < arr[j-1])
            {
                //如果符合排序要求，则令arr[j] 为 其前面的一个元素，这样就能进行扩容，为插入的元素提供空间
                arr[j] = arr[j-1];
                j--;
            }
            //j代表了正确的插入元素下标，temp则为需要插入的元素值
            arr[j] = temp;
        }
        
    }
};


