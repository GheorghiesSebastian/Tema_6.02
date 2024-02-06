#include <iostream>

int n = 0;
int a = 0;
int s = 0;
int k = 0;

using namespace std;

int main()
{
    cin >> a;
    cin >> k;
    while (a!=0)
    {
        n = a%10;
        if (n<k)
        {
            return 0;
        }
        a = a/10;
    }
    cout << "ok";
    return 0;
}
