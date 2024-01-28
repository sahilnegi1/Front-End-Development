#include<iostream>
using namespace std;
int divisor(int a)
{int i;
    for ( i = 1; i*i <a; i++)
    {
        if(a%i==0)
        {
            cout<<i;
        }
    }
    for ( ; i>=1; i--)
    {if(a%i==0)
        {
            cout<<a/i;
        }
        
    }
    
    
}
int main()
{
    int a=15;
    divisor(a);
    return 0;
}