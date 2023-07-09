#include <iostream>
using namespace std;

class dfs
{
public:
    int v=10;
    int* a =new int[v][v];
    void matrix()
    {
        cout << "Enter num of vertex";
        cin >> v;
        // int a[v][v];
        for (int i = 0; i < v; i++)
        {
            cout << "For " << i + 1 << "th vertex";
            for (int j = 0; j < v; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    void disp()
    {
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    dfs o;
    o.matrix();
    o.disp();
}