// Question # 6
#include <iostream>
#include <string>
using namespace std;
void rotateRight(int arr[], int size)
{
    if (size <= 1)
        return;
    int last = arr[size - 1];
    for (int i = size - 1; i > 0; --i)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
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
    rotateRight(arr, 6);
    cout << "Rotated array: ";
    for (int i = 0; i < 6; ++i)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}