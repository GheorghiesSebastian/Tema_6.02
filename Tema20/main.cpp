#include <iostream>

int b= 0 ;
int a= 0 ;
int n= 0 ;
int maxz= 0 ;
int x= 0 ;
int k=0;

using namespace std;

int main()
{
        cin >> x;
        while (x!=0)
        {
            n = x%10;
            if (n>maxz && n%2 ==1)
            {
                maxz = n;
            }
            x=x/10;
        }
    cout << maxz;
    return 0;
}
