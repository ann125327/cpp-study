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

void addperson(addressbooks *abs)
{
    if (abs->m_size == max)
    {
        cout << "通讯录已满，无法添加！" << endl;
        return;
    }
    else
    {
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        abs->personarray[abs->m_size].m_name = name;

        int age = 0;
        cout << "请输入年龄：" << endl;
        cin >> age;
        abs->personarray[abs->m_size].m_age = age;

        string number;
        cout << "请输入联系电话：" << endl;
        cin >> number;
        abs->personarray[abs->m_size].m_number = number;

        string adress;
        cout << "请输入家庭住址：" << endl;
        cin >> adress;
        abs->personarray[abs->m_size].m_adress = adress;
        abs->m_size++;
        cout << "添加成功！" << endl;
        system("pause");
        system("cls");
    }
}