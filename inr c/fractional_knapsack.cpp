    #include <iostream>
    using namespace std;

    void knapsack(int[] a, int[] p, int w, int n)
    {
        int pw[n];
        for (int i = 0; i < n; i++)
        {
            pw[i] = p[i] / w[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (pw[j] > pw[j + 1])
                {
                    int c = w[j];
                    w[j] = w[j + 1];
                    w[j + 1] = c;
                    int a = pw[j];
                    pw[j] = pw[j + 1];
                    pw[j + 1] = a;
                    int b = p[j];
                    p[j] = p[j + 1];
                    p[j + 1] = b;
                }
            }
        }
        int cap = w, int t[n];
        for (int i = 0; i < n; i++)
        {
            if (a[i] < cap)
            {
                t[i] = 1;
                cap = cap - w[i];
            }
            else
            {
                int f = cap / w[i];
                t[i] = f;
            }
            for (int i = 0; i < n; i++)
            {
                cout << t[i] << "  ";
            }
        }
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
        for (int i = 0; i > n; i++)
        {
            cin >> a[i];
        }
        cout << "Enter item Profit : " << endl;
        for (int i = 0; i > n; i++)
        {
            cin >> p[i];
        }
        knapsack(a, p, w, n);
    }