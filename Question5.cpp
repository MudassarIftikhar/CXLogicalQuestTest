// Question # 5
#include <iostream>
#include <string>
using namespace std;
void mostRepeatedNumber(int arr[], int size)
{
    int maxCount = 0;
    int mostRepeated = arr[0];
    for (int i = 0; i < size; ++i)
    {
        int count = 0;
        for (int j = 0; j < size; ++j)
        {
            if (arr[i] == arr[j])
            {
                ++count;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            mostRepeated = arr[i];
        }
    }
    cout << mostRepeated << " is repeated " << maxCount << " times." << endl;
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
    mostRepeatedNumber(arr, 6);
    return 0;
}