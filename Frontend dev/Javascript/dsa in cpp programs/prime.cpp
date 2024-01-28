#include<iostream>
using namespace std;
int main()
{
    int a;
    bool res=true;
    cout<<"enter a number = ";
    cin>>a;
    if(a==1)
    {cout<<"not prime";

    }
    for (int i = 2; i*i<= a; i++)
    {
    if(a%i==0)
    {
        res= false;
        break;
    }

    }
    if(res==true)
    {
        cout<<"it is a prime number ";
    
    }
    else
    cout<<"not prime";
}