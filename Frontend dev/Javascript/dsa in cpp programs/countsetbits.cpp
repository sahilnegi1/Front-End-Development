#include<iostream>
using namespace std;
int countsetbits(int n)
{
    int res=0;
    while(n>0)
    {n=n&(n-1);
        res+=1;
    }
    cout<<res;
}
int main()
{
    int a;
    cout<<"enter a number  = ";
    cin>>a;
    countsetbits(a);
    return 0;
}