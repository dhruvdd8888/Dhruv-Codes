#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter vertexes";
    cin>>n;
    int a[n][n];
    cout<<"Enter edges"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < count; j++)
        {
            cout<<"Enter for "<<i+1<<", ";
            cout<<j+1<<" ";
            cin>>a[i][j];
        }
    }
    int visited[n];
    for (int i = 0; i < n; i++)
    {
        visited[i]=-1;
    }
    
}