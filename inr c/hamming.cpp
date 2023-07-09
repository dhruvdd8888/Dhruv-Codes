#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, length, count;   

    string s1 = "Helloworld";
    string s2 = "Helloindia";

    length = s2.length();

    for (int i = 0; i < length; i++)
    {
        if (s1[i] != s2[i])
        {
            count++;
        }
    }
    cout << endl;
    cout << "Hamming distance:" << count;
    return 0;
}