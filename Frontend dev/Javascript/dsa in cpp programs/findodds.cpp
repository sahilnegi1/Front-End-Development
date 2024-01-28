#include<iostream>
using namespace std;
int findodds(int a[],int n)
{
    int res=a[0];
    for (int i = 1; i < n; i++)
    {
        res=res^a[i];
    }
    cout<<res;
    return 0;
}
int main()
{
    int a;
    cout<<"enter a number  = ";
    cin>>a;
    int b[a];
    for (int i = 0; i < a; i++)
    {
        cin>>b[i];
    }
    
    findodds(b,a);
    return 0;
}