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
    cin >> a;
    for (b=0;b<a;++b)
    {
        cin >> x;
        while (x!=0)
        {
            n = x%10;
            if (n>maxz)
            {
                maxz = n;
            }
            x=x/10;
        }
        if (maxz%2==1){
            k+=1;
        }
    }
    cout << k;
    return 0;
}
