// Question # 4
#include <iostream>
using namespace std;
int missingNum(int arr[], int size)
{
    int total = (size + 1) * (size + 2) / 2;
    for (int i = 0; i < size; i++)
    {
        total -= arr[i];
    }
    return total;
}
int main()
{
    int arr[6];
    cout << "Enter 6 numbers between 1 and 7 (with one number missing):" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter number at [" << i + 1 << "]: ";
        cin >> arr[i];
    }
    cout << "The missing number is: " << missingNum(arr, 6) << endl;
    return 0;
}