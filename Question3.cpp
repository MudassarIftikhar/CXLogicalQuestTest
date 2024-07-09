// Question # 3
#include <iostream>
#include <string>
int sumLargestNum(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr[0] + arr[1];
}
int main()
{
    int arr[6];
    std::cout << "Enter any 6 numbers: ";
    for (int i = 0; i < 6; i++)
    {
        std::cout << "\nEnter number at[" << i + 1 << "] :";
        std::cin >> arr[i];
    }
    std::cout << sumLargestNum(arr, 6);

    return 0;
}