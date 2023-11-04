#include<iostream>
//实际上可以用algorithm的一系列排序算法代替
//时间复杂度0(n^2)

void bubbleSort(int a[] , int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
           if (a[j] > a[j+1])
           {
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
           }
           
        }
        
    }
    
}



int main()
{
    int a[] = {88,78,12,65,411,3,45};
    int size = sizeof(a) / sizeof(a[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << a[i] << " ";
    }


    bubbleSort(a , size);

    std::cout << "\nSorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << a[i] << " ";
    }

}