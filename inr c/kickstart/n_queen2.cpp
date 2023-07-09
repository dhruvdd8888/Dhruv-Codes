#include <iostream>
using namespace std;

bool a[8][8];
int back = 0;

void nq(int x, int y);

void zero(int x, int y)
{
    for (int i = x; i < 7; i++)
    {
        for (int j = y; j < 7; j++)
        {
            a[i][j] = 0;
        }
        y = 0;
    }
}

bool check(int i, int j)
{
    int u = i, v = j;
    bool ret = 1;

    for (u = i; u >= 0; u--)
    {
        if (a[u][j] == 1)
        {
            ret = 0;
        }
    }
    for (u = i; u >= 0; u--)
    {
        if (a[u][v] == 1)
        {
            ret = 0;
        }
        v--;
        if (v < 0)
        {
            break;
        }
    }

    v = j;
    for (u = i; u >= 0; u--)
    {
        if (a[u][v] == 1)
        {
            ret = 0;
        }
        v++;
        if (v > 7)
        {
            break;
        }
    }
    return ret;
}

int checklast()
{
    for (int i = 0; i < 8; i++)
    {
        if (a[i][7] == 0)
        {
            return i;
        }
    }
}

int find1(int i)
{
    for (int j = 0; j < 8; j++)
    {
        if (a[i][j] == 1)
        {
            return j;
        }
    }
}

int backtrack()
{
    int i = checklast();
    if (i != 0 && i <= back)
    {
        i = back + 1;
    }
    int j = find1(i);
    cout << i << " " << j << endl;
    for (int column = j; column < 7; column++)
    {
        a[i][column + 1] = check(i, column + 1);
        if (a[i][column + 1] == 1)
        {
            a[i][j] = 0;
            zero(i, (column + 2));
            back = i - 1;
            break;
        }
        else
        {
            back = i;
        }
    }
    return i;
}

void nq(int x, int y)
{
    int i = x, j = y, flag = 0;

    while (i < 8 && flag == 0)
    {
        for (j = y; j < 8; j++)
        {
            a[i][j] = check(i, j);
            if (a[i][j] == 1)
            {
                j = 10;
                flag = 1;
                break;
            }
        }
        if (a[i][7] == 0 && j == 8 && flag == 0)
        {
            i = backtrack();
        }
        flag = 0;
        y = 0;
        i++;
    }
}

void print(int c, int b)
{
    cout << endl;
    for (int i = c; i < 8; i++)
    {
        for (int j = b; j < 8; j++)
        {
            cout << a[i][j] << " ";
        }
        b = 0;
        cout << endl;
    }
}

int main()
{
    zero(0, 0);

    nq(0, 0);

    print(0, 0);
}