#include <iostream>
using namespace std;

int a[8];
int n = 8;

class arr
{
public:
    // arr()
    // {
    //     cout << "Enter size of array";
    //     cin >> n;
    // }

    void input()
    {
        cout << "Enter array elements";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }

    void merge_sort(int p = 0, int r = n)
    {
        cout << "x" << endl;
        int q = (p + r) / 2;
        if (q - p != 1 && r - q != 1)
        {
            merge_sort(p, q);
            merge_sort(q, r);
        }
        cout << "x" << endl;
        // merge(p, q, r);
    }
    void merge(int p, int q, int r)
    {
        while (p <= q)
        {
            if (a[p] > a[q])
            {
                int t = a[p];
                a[p] = a[q];
                a[q] = t;
                p++;
            }
        }
        while (q <= r)
        {
            if (a[r] > a[q])
            {
                int t = a[r];
                a[r] = a[q];
                a[q] = t;
                q++;
            }
        }
    }

    void disp()
    {
        cout << endl;
        cout << "sorted array : ";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << "  ";
        }
    }
};

int main()
{
    arr x;
    x.input();
    x.merge_sort(0, n);
    x.disp();
}