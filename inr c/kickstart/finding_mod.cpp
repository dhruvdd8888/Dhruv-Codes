#include <iostream>
using namespace std;

void sort(int x)
{
    cout << "Sort";
}

void disp(int x)
{
    cout << "Displaying";
}

int main()
{
    int x, t;
    cout << "Enter the number of observations : ";
    cin >> x;

    int a[x];

    cout << "Enter the elements";
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }

    //  sort(x);

    for (int i = 0; i < x; i++ )
    {
        for (int j = 0; j < x - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    //    disp(x);

    //difference arr
    int diff[x - 1];
    for (int i = 0; i < x; i++)
    {
        diff[i] = a[i + 1] - a[i];
    }

    //count continous zeroes in diff
    int c = 0, fc = 0, note;
    for (int i = 0; i < x - 1; i++)
    {
        if (diff[i] == 0)
        {
            c++;
            if (fc < c)
            {
                fc = c;
                note = i;
            }
        }
        else
        {
            c = 0;
        }
    }

    cout << endl
         << a[note] << " repeated "
         << fc + 1
         << " times."
         << endl;
    for (int i = 0; i < x - 1; i++)
    {
        //    cout << diff[i] << "  ";
    }
    cout << endl;
    return 0;
}