#include <iostream>
using namespace std;

void knapsack(int a[], int p[], int w, int n)
{
    int pw[n];
    for (int i = 0; i < n; i++)
    {
        pw[i] = p[i] / a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (pw[j] > pw[j + 1])
            {
                int c = a[j];
                a[j] = a[j + 1];
                a[j + 1] = c;
                int a = pw[j];
                pw[j] = pw[j + 1];
                pw[j + 1] = a;
                int b = p[j];
                p[j] = p[j + 1];
                p[j + 1] = b;
            }
        }
    }
    float cap = w;
    float t[n];
    for (int i = 0; i < n; i++)
    {
        t[i]=0;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] < cap && cap > 0)
        {
            t[i] = 1;
            cap = cap - a[i];
        }
        else if (cap > 0)
        {
            float f = cap / a[i];
            t[i] = f;
            cap = cap - (f * a[i]);
            i=n+10;
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "Weight  " << a[i];
        cout << "  Profit  " << p[i];
        cout << "  Taken  " << t[i] << endl;
    }
    int tp = 0;
    cout << endl
         << "Total profit  ";
    for (int i = 0; i < n; i++)
    {
        tp += p[i] * t[i];
    }
    cout << tp;
}
int main()
{
    int n;
    cout << "Enter size of array : " << endl;
    cin >> n;
    int a[n], p[n], w;
    cout << "Enter knapsack weight : " << endl;
    cin >> w;
    cout << "Enter item weights : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter item Profit : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    knapsack(a, p, w, n);
}