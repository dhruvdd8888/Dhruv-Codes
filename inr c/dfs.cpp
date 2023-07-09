#include <iostream>
using namespace std;

void dfs(int c, int v, int *a, int *visited)
{
    if ((*(visited + c)) == -1)
    {
        *(visited + c) = 1;
        cout << (c+1);
    }
    else
    {
        return;
    }
    for (int i = 0; i < v; i++)
    {
        if ((*(a + (v * c) + i) == 1) && (*(visited + i) == -1))
        {
            dfs(i, v, a, visited);
        }
    }
}

int main()
{
    cout << "Enter total vertex";
    int v;
    cin >> v;
    int a[v][v];

    cout << "Enter vertexes\n";
    for (int i = 0; i < v; i++)
    {
        cout << "For " << (i + 1) << "th vertex  ";
        for (int j = 0; j < v; j++)
        {
            cin >> a[i][j];
        }
    }
    int visited[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] = -1;
    }
    dfs(0, v, *a, &(visited[0]));
}