#include <iostream>
using namespace std;
// 值传递
void myswap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// 地址传递
void myswap02(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

// 引用传递
void myswap03(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    myswap03(a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}