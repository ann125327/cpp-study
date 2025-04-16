#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
// menu

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
   system("pause");
   system("cls");
};

int isexist(addressbooks *abs, string name)
{
   for (int i = 0; i < abs->m_size; i++)
   {
      if (abs->personarray[i].m_name == name)
      {
         return i;
      }
   }
   return -1;
}

void deleteperson(addressbooks *abs, string name)
{

   int ret = isexist(abs, name);
   if (ret != -1)
   {
      for (int i = ret; i < abs->m_size; i++)
      {

         abs->personarray[i] = abs->personarray[i + 1];
      }
      abs->m_size--;
   }

   return;
};

void searchperson(addressbooks *abs, string name)
{

   int ret = isexist(abs, name);
   if (ret != -1)
   {
      cout << "已经找到！" << endl;
      cout << "姓名：" << abs->personarray[ret].m_name << "\t";
      cout << "年龄：" << abs->personarray[ret].m_age << "\t";
      cout << "联系电话：" << abs->personarray[ret].m_number << "\t"
           << "家庭住址：" << abs->personarray[ret].m_adress << endl;
   }
   else
   {
      cout << "没有找到耶" << endl;
   }
   system("pause");
   system("cls");
}

void modifyperson(addressbooks *abs, string name)
{
   int ret = isexist(abs, name);
   cout << "请输入修改后的姓名：" << endl;
   string name1;
   cin >> name1;
   abs->personarray[ret].m_name = name1;
   cout << "请输入修改后的年龄：" << endl;
   int age1;
   cin >> age1;
   abs->personarray[ret].m_age = age1;
   cout << "请输入修改后的联系电话：" << endl;
   string number1;
   cin >> number1;
   abs->personarray[ret].m_number = number1;
   cout << "请输入修改后的家庭住址：" << endl;
   string adress1;
   cin >> adress1;
   abs->personarray[ret].m_adress = adress1;
   cout << "修改成功！" << endl;
   system("pause");
   system("cls");
}

void showmenu()
{
   cout << "*******************" << endl;
   cout << "****1.添加联系人****" << endl;
   cout << "****2.显示联系人****" << endl;
   cout << "****3.查找联系人****" << endl;
   cout << "****4.修改联系人****" << endl;
   cout << "****5.删除联系人****" << endl;
   cout << "****6.清空联系人****" << endl;
   cout << "****0.退出通讯录****" << endl;
   cout << "********************" << endl;
}
int main()
{
   addressbooks abs;
   abs.m_size = 0;

   int select = 0;
   while (true)
   {
      showmenu();

      cin >> select;
      switch (select)
      {
      case 1:             // add
         addperson(&abs); // 利用地址传递，调用添加联系人的函数
         break;
      case 2: // display
         displayperson(&abs);
         break;
      case 3: // search
      {
         string name;
         cout << "请输入要查找的联系人姓名：" << endl;
         cin >> name;
         searchperson(&abs, name);
         break;
      }
      case 4: // modify
      {
         string name;
         cout << "请输入要修改的联系人姓名：" << endl;
         cin >> name;
         if (isexist(&abs, name) == -1)
         {
            cout << "查无此人！" << endl;
         }
         else
         {
            cout << "找到此人！" << endl;
            modifyperson(&abs, name);
         }
      }
      break;
      case 5: // delete
      {
         cout << "请输入要删除的联系人姓名：" << endl;
         string name;
         cin >> name;

         if (isexist(&abs, name) == -1)
         {
            cout << "通讯录里没有这个耶！" << endl;
         }
         else
         {
            cout << "找到此人！" << endl;
            deleteperson(&abs, name);
            cout << "已进行删除操作(＾－＾)V" << endl;
            system("pause");
            system("cls");
         }
         break;
      }
      case 6: // clean
      {
         cout << "是否确认清空通讯录？" << endl;
         cout << "1.确认" << endl;
         cout << "2.返回" << endl;
         int select2;
         cin >> select2;
         switch (select2)
         {
         case 1:
            abs.m_size = 0;
            cout << "通讯录已清空！" << endl;
            system("pause");
            system("cls");
            break;

         case 2:
            cout << "返回主菜单" << endl;
            system("pause");
            system("cls");
            break;
         }
      }
      break;
      case 0: // quit
         cout << "weilcome next time!(^^)~*" << endl;
         system("pause");
         break;
      default:
         cout << "这部分功能还在探索..." << endl;
         break;
      }
   }

   system("pause");

   return 0;
}
