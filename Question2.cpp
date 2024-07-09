// Question # 2
#include <iostream> #include <string>
using namespace std;
string checkPalindrome(string c)
{
    for (int i = 0; i < c.length() / 2; i++)
    {
        if (c[i] != c[c.length() - i - 1])
        {
            return "No";
        }
    }
    return "Yes";
}
int main()
{
    string c;
    cout << "Enter a string: ";
    cin >> c;
    cout << checkPalindrome(c);
    return 0;
}