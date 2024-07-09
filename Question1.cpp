// Question # 1
#include <iostream>
void sortArrayDescending(int arr[], int size)
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
    sortArrayDescending(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        std::cout << arr[i] << ",";
    }
    return 0;
}