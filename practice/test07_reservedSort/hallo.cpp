#include <iostream>;
using namespace std;
int main()
{
    cout << "please input a number: ";
    int num;
    cin >> num;
    for (num; num > 0; num = num / 10)
    {
        cout << num % 10;
    }
    system("pause");
    return 0;
}