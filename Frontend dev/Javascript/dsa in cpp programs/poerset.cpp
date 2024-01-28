#include<iostream>
using namespace std;
int powerset(string n)
{int b=n.length();
int x=(1<<b);
for (int i = 0; i < x; i++)
{
    for (int j = 0; j < b; j++)
    {
        if(i&(1<<j)!=0)
        cout<<n[j];
    }
}

}
int main()
{
    string a;
    cout<<"enter a string  = ";
    cin>>a;
    
    powerset(a);
    return 0;
}