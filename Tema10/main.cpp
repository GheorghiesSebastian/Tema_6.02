#include <iostream>

int n = 0;
int a = 0;
int s = 0;
int b= 0;
int k = 0;

using namespace std;

int main()
{
    cin >> a;
    b = a;
    while (a!=0)
    {
        a=a/10;
        k +=1;
    }
    for (s = 0; s<=k; ++s)
    {
        n = b%10;
        if (n == 0)
        {
            b = b/10;
        }
    }
    cout << b;
    return 0;
}
