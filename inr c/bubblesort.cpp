#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cout << "Enter size of array ";
    cin >> n;
    int a[n];
    cout << "Enter array elements ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    cout << "\nSorted array : ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
}