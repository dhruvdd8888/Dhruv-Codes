#include <iostream>
using namespace std;

bool a[8][8];

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

void zero(int x)
{
    x++;
    for (int i = x; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            a[i][j] = 0;
        }
    }
}

void nq()
{
    int i = 0, j = 0, flag = 0, nl = 0;

    while (i < 8)
    {
        while (j < 8 && nl != 1)
        {
            a[i][j] = check(i, j);
            j++;
            if (a[i][j - 1] == 1)
            {
                nl = 1;
            }
        }
        if (j == 8 && nl != 1)
        {
            for (int x = 0; x < i; x++)
            {
                if (a[x][7] == 0)
                {
                    for (int y = 0; y < 8; y++)
                    {
                        if (a[x][y] == 1)
                        {
                            a[x][y + 1] = check(x, y + 1);
                            if (a[x][y + 1] == 1)
                            {
                                a[x][y] = 0;
                            }
                            // a[x][y + 1] = 1;
                            // a[x][y] = 0;
                            // if (x == 1 && y == 6)
                            // {
                            //     a[x][y] = 1;
                            //     a[x][y + 1] = 0;
                            // }
                            zero(x);
                            y = 10;
                            i = x;
                            x = 10;
                        }
                    }
                }
            }
        }
        j = 0;
        i++;
        nl = 0;
    }
}

int main()
{
    //initialize board
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            a[i][j] = 0;
        }
    }

    //setting 1s
    nq();

    //printing finaled
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}