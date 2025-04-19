#include <iostream>
using namespace std;
int main()
{

    cout << "please input a number: ";
    int num;
    cin >> num;
    int product = 1;
    for (int i = 1; i <= num; i++)
    {
        product *= i;
    }
    cout << "the factorial of " << num << " is " << product << endl;
    system("pause");
    return 0;
}