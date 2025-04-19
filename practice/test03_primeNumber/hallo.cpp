#include <cmath>
#include <iostream>
using namespace std;

bool IsPrime(int num = 0)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i < num; i++)
    {

        if (num % i == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
int main()
{
    cout << "please input a number" << endl;
    int num = 0;
    cin >> num;
    if (IsPrime(num) == true)
    {
        cout << "the number is prime" << endl;
    }
    else
    {
        cout << "the number is not prime" << endl;
    }
    system("pause");
    return 0;
}