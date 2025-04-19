#include <iostream>
using namespace std;
int &test01()
{
    int a = 10;
    return a;
}
int &test02()
{
    static int b = 10;
    return b;
}
int main()
{
    int &ref = test01();
    cout << "ref = " << ref << endl;
    int &ref2 = test02();
    cout << "ref2 = " << ref2 << endl;

    system("pause");
    return 0;
}