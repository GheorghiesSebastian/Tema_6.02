#include <iostream>

int n = 0;
int a = 0;
int s = 0;
int k = 0;
int maxz =0;

using namespace std;

int main()
{
    cin >> a;
    while (a!=0)
    {
        n = a%10;
        if (n>maxz)
        {
            maxz = n;
        }

        a = a/10;
    }
    cout << maxz;
    return 0;
}
