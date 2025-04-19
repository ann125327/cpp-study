#include <iostream>
#include <string>
using namespace std;

bool palindrome(string str)
{
    int len = str.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

int main()
{
    cout << "please input a string: ";
    string str;
    cin >> str;
    palindrome(str);
    if (palindrome(str))
    {
        cout << "the string is a palindrome" << endl;
    }
    else
    {
        cout << "the string is not a palindrome" << endl;
    }
    system("pause");
    return 0;
}