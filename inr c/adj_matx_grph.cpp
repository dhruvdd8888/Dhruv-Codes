#include <iostream>
using namespace std;


void adj(int v, int* a)
{
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cout << *(a+(i*v)+j) << " ";
        }
        cout << endl;
    }
    // for (int i=0;i<v;i++)
    // {
    //     if(a[i][v]==1)
    //     {

    //     }
    // }
}


int main()
{
    int v;
    cout << "Enter the number of vertices : ";
    cin >> v;
    int a[v][v];
    cout << "Enter graph : " << endl;

    for (int i = 0; i < v; i++)
    {
        cout << "For " << i + 1 << "th vertex";
        for (int j = 0; j < v; j++)
        {
            cin >> a[i][j];
        }
    }

    // cout << "Adjcency matrix graph : " << endl;
    // for (int i = 0; i < v; i++)
    // {
    //     for (int j = 0; j < v; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    adj(v, *a);
}