#include <iostream>

int n = 0;
int a = 0;
int s = 0;
int k = 0;
int maxp = 0;

using namespace std;

int main()
{
    cin >> a;
    if (a==0)
    {
        cout << "10";
        return 0;
    }
    while (a!=0)
    {
        n=a%10;
        if (n%2==0 && n>maxp)
        {
            maxp = n;
        }
        a = a/10;
    }
    cout << maxp;
    return 0;
}
