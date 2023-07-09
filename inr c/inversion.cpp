#include <iostream>
using namespace std;

void inversion(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[j] > a[j + 1])
            {
                count++;
            }
        }
    }
    cout << "Inversions = " << count;
}

int main()
{
    int n;
    cout << "ENter array size";
    cin >> n;

    int a[n];
    cout << "Enter array elements";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    inversion(a, n);
    return 0;
}