#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

int main()
{
    student s1 = {"aa", 11, 11};
    student s2 = {"bb", 22, 22};
    student *p1 = &s1;
    cout << p1->age << endl;

    system("pause");
    return 0;
}