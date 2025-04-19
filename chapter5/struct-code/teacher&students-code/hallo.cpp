#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

struct teacher
{
    string name;
    struct student sarr[5];
};

void input(struct teacher tarr[2], int len)
{

    for (int i = 0; i < len; i++)
    {
        string nameseed = "ABCDE";
        tarr[i].name = "Teacher_";
        tarr[i].name += nameseed[i];

        for (int j = 0; j < 5; j++)
        {
            tarr[i].sarr[j].name = "student_";
            tarr[i].sarr[j].name += nameseed[j];
            int random = rand() % 100;
            tarr[i].sarr[j].age = random;
            tarr[i].sarr[j].score = 80;
        }
    }
};
void print(struct teacher arr[2], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "Teacher name:" << arr[i].name << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "\t\tStudent name:" << arr[i].sarr[j].name;
            cout << " Student age:" << arr[i].sarr[j].age;
            cout << " Student score:" << arr[i].sarr[j].score << endl;
        }
    }
}
int main()
{
    struct teacher tarr[2];
    int len = sizeof(tarr) / sizeof(tarr[0]);

    input(tarr, len);
    print(tarr, len);
    system("pause");
    return 0;
}