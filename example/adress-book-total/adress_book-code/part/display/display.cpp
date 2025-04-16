#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
struct person
{
    string m_name;
    int m_age;
    string m_number;
    string m_adress;
};

#define max 1000
struct addressbooks
{
    struct person personarray[max];
    int m_size;
};
void displayperson(addressbooks *abs)
{
    if (abs->m_size == 0)
    {
        cout << "通讯录为空！" << endl;
    }
    else
    {
        for (int i = 0; i < abs->m_size; i++)
        {
            cout << "姓名：" << abs->personarray[i].m_name << "\t";
            cout << "年龄：" << abs->personarray[i].m_age << "\t";
            cout << "联系电话：" << abs->personarray[i].m_number << "\t"
                 << "家庭住址：" << abs->personarray[i].m_adress << endl;
        }
    }
}
