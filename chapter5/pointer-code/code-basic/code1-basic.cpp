#include <iostream>
#include <string>
using namespace std;

struct partner
{
    string name;
    int age;
    int likability;
};

int main()
{
    struct partner p1 = {"saeki yuzuru", 24, 100};
    struct partner p2 = {"kuroyuki", 17, 100};
    struct partner p3 = {"raven", 24, 100};

    cout << "choose your partner(1,2,3)" << endl;
    int choice = 0;
    cin >> choice;
    if (choice == 1)
    {
        cout << "your partner is " << p1.name << endl
             << "his likability is" << p1.likability << endl;
    }
    else if (choice == 2)
    {
        cout << "your partner is " << p2.name << endl
             << "his likability is " << p2.likability << endl;
    }
    else if (choice == 3)
    {
        cout << "your partner is " << p3.name << endl
             << "his likability is " << p3.likability << endl;
    }

    system("pause");
    return 0;
}