#include <iostream>
using namespace std;

int main()

{
    int x = 0;
    cout << "1";
gta:
    cout << "2";
    if (x == 0)
    {
        x = 1;
        goto gta;
    }
    cout << "3";
    return 0;
}