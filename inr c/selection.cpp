    #include <iostream>
    using namespace std;

int main()
{
    int i, n;
    cout << "Enter size of array ";
    cin >> n;
    int a[n];
    cout << "Enter array elements";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m = a[i], pos = 0;
    for (int j = 0; j < n; j++)
    {
        m = a[j];
        for (i = j; i < n; i++)
        {
            if (m > a[i])
            {
                m = a[i];
                pos = i;
                a[pos] = a[j];
                a[j] = m;
            }
        }
    }
    cout << endl<< "sorted array : ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
}