#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array ";
    cin >> n;
    int a[n];
    cout << "Enter array elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
    cout << endl<< "Sorted array : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
}