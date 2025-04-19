#include <cmath>
#include <iostream>
using namespace std;
int main()

{
    cout << "please input a number" << endl;
    int N = 0;
    cin >> N;
    int num1 = 0;
    int num2 = 1;
    for (int i = 0; i < N; i++)
    {
        cout << num1 << endl;
        int temp = num1;
        num1 = num2;
        num2 = temp + num2;
    }

    system("pause");
    return 0;
}