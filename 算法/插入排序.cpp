#include<iostream>

void insertSort(int a[] , int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = a[i];
        int j = i+1;
        while (j>=0 && a[j] > key)
        {
            a[j+1] = a[j+1];
            j--;
        }
        a[j+1] = key;
        
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


    insertSort(a , size);

    std::cout << "\nSorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << a[i] << " ";
    }
}