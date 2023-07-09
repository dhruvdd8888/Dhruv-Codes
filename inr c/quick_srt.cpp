#include <iostream>
using namespace std;

int n = 10;
int arr[10];

int partition(int a, int c)
{
    int p = a, i = p, j;
    for (j = p + 1; j < c; j++)
    {
        if (arr[p] > arr[j])
        {
            i++;
            int t;
            t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
        }
    }
    int t;
    t = arr[p];
    arr[p] = arr[i];
    arr[i] = t;

    return i;
}

void quick(int a, int c)
{
    if (a < c)
    {
        int b = partition(a, c);
        quick(a, b - 1);
        quick(b + 1, c);
    }
}

int main()
{
    cout << "Enter array elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Sorted array\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}