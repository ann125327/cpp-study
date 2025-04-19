#include <iostream>
using namespace std;
int main()
{
    cout << "please input a number: ";
    int num;
    cin >> num;
    if (num % 4 == 0)
    {
        cout << "the number is divisible by 4";
    }
    else
    {
        cout << "the number is not divisible by 4";
    }
    system("pause");
    return 0;
}