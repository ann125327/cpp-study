#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

struct student arr[2] = {
    {"ann", 18, 100},
    {"aurher", 20, 100}

};

int main()
{

    cout << arr[1].name << endl;
    arr[1].name = "jack";
    cout << arr[1].name << endl;
    system("pause");
    return 0;
}