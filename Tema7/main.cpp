#include <iostream>

int n = 0;
int a = 0;
int s = 0;
int k = 0;
int kp = 0;
int ki = 0;


using namespace std;

int main()
{
    cin >> a;
    while (a!=0)
    {
        n = a%10;
        if (n%2 == 0)
        {
            kp += 1;
        }
        if (n%2 == 1)
        {
            ki +=1;
        }
        a = a/10;
    }
    cout << kp;
    cout << ki;
    return 0;
}
