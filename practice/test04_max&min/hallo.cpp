#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

void sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "the min is " << arr[0] << endl;
    cout << "the max is " << arr[size - 1] << endl;
}

void sort2(int arr[], int size)
{
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "the min is " << min << endl;
    cout << "the max is " << max << endl;
    system("pause");
}
int main()

{
    int size;
    cout << "please input the size of the array" << endl;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sort2(arr.data(), size);

    system("pause");
    return 0;
}