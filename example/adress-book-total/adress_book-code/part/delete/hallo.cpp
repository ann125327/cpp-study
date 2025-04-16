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

void deleteperson(addressbooks *abs)
{
    string name;
    cout << "请输入要删除的联系人姓名：" << endl;
    cin >> name;
    for (int i = 0; i < abs->m_size; i++)
    {
        if (abs->personarray[i].m_name == name)
        {
            for (int j = i; j < abs->m_size; j++)
            {
                abs->personarray[j] = abs->personarray[j + 1];
            }
            abs->m_size--;
            cout << "删除成功！" << endl;
            system("pause");
            system("cls");
            return;
        }
        else
        {
            cout << "查无此人！" << endl;
            system("pause");
            system("cls");
            return;
        }
    }
}