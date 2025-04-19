#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int input = 0;
    cout << "please input a number" << endl;
    cin >> input;
    int num = 0;
    for (int i = 0; i <= input; i++)
    {
        num = i + num;
    }
    cout << "add from 1 yo what you entered,the number is " << num << endl;
    system("pause");
    return 0;
}