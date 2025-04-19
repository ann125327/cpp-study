#include <iostream>
using namespace std;
void sort(int *arr, int len)
{

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print(int *arr, int len)
{
    for (int k = 0; k < len; k++)
    {
        cout << arr[k] << endl;
        }
}
int main()
{
    int arr[] = {1, 3, 5, 2, 6, 7, 36, 8, 35, 33};
    int len = sizeof(arr) / sizeof(arr[0]);
    sort(arr, len);
    print(arr, len);
    system("pause");
    return 0;
}