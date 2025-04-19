#include <iostream>
using namespace std;

void findEven(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    cout << "please input the size of the array: ";
    int size;
    cin >> size;
    cout << "please input an array: ";
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "the even numbers are: ";
    findEven(arr, size);
    system("pause");
    return 0;
}