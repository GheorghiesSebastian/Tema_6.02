#include <iostream>

int b= 0 ;
int j = 0;
int a= 0 ;
int n= 0 ;
int p=0;
int minz= 0 ;
int maxz= 0 ;
int x= 0 ;
int k=0;

using namespace std;

int main()
{
        cin >> x;
        b=x;
        cin >> a;
        while (x!=0)
        {
            k+=1;
            j  =x%10;
            if (j>maxz)
            {
                maxz = j;
            }
            x=x/10;
        }
        minz = maxz;
        while (k!=0)
        {
            n = b%10;
            if (n< minz && n>a)
            {
                minz = n;
                p = minz;
            }
            b=b/10;
        }
    cout << p;
    return 0;
}
