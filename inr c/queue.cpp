#include <iostream>
#include <queue>
using namespace std;
queue <int> to[50];

int main()
{
    to->push(4);
    to->push(5);
    cout<<to->front();
    cout<<to->front();
    cout<<to->empty();
    to->pop();
    to->pop();
    cout<<to->empty();
    cout<<to->front();
}