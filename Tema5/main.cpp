#include <iostream>

int n = 0;
int a = 0;
int s = 0;
int k = 0;

using namespace std;

int main()
{
    cin >> k;
    cin >> a;
    while (a!=0)
    {
        n = a%10;
        if (n != k)
        {
            s+= n;
        }
        a = a/10;
    }
    cout << s;
    return 0;
}
