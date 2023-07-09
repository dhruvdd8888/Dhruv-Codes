#include <iostream>
#include <queue>
using namespace std;
queue <int> toVisit[50];
void bfs(int c, int v, int *a, int *visited)
{
    for (int i = 0; i < v; i++)
    {
        if ((*(a + (v * c) + i) == 1) && (*(visited + i) == -1))
        {
            *(visited + i) = 1;
            cout << (i + 1)<<" ";
            toVisit->push(i);
        }
    }
    while(!(toVisit->empty()))
    {
        int x=toVisit->front();
        toVisit->pop();
        bfs(x,v,a,visited);
    }
}

int main()
{
    cout << "Enter total vertex  ";
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
    visited[0]=1;
    cout << "BFS - 1 ";
    bfs(0, v, *a, &(visited[0]));
}