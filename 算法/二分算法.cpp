#include<algorithm>
#include<ctime>
#include<iostream>
int binarySearch(int a[] , int size , int val)
{
    int left = 0;
    int right = size - 1;
    while (left != right)
    {
        int mid = left + (right - left ) / 2;
        if (a[mid] == val)
        {
            return mid;
        } else if (a[mid] < val)
        {
            left = mid+1;
        } else if (a[mid] > val)
        {
            right = mid -1;
        }
    }

    return -1;
}



int MYbinarySearch(int arr[] , int size , int val)
{//起始规定左右边界
    int left = 0;
    int right = size - 1;
//知道左右边界重合才停止二分
    while (left != right)
    {
        //中间值
        int mid = left + (right - left)/2;
        if (arr[mid] < val)
        {
            left = mid +1;
        } else if (arr[mid] > val)
        {
            right = mid -1;
        } else return mid;
    }
    
}




int main()
{
    srand((unsigned int) time(NULL));
    int arr[10];
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand()%41 + 100;
    }

    std::cout<<binarySearch(arr , size , 54);
    
}