#include <iostream>

int n = 0;
int a = 0;
int s = 0;
int k = 0;
int minz = 9999999999999999;
int minz2 = 9999999999999999;

using namespace std;

int main()
{
    cin >> a;
    while (a!=0)
    {
        n = a%10;
        if (n<minz && n%2 ==0)
        {
            minz=n;
            cout << minz<<"---1\n";
        }
        if (n<minz2 && n%2 ==1)
        {
            minz2=n;
            cout << minz2<<"---2\n";
        }
        a = a/10;
    }
    cout << minz2*minz;
    return 0;
}
