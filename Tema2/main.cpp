#include <iostream>

int n = 0;
int a = 0;
int s = 0;

using namespace std;

int main()
{
    cin >> a;
    while (a>10)
    {
        a = a/10;
    }
    if (a%2 == 0)
    {
        cout << a;
    }
    cout << s;
    return 0;
}
