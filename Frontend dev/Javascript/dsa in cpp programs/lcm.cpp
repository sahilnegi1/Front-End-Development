#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int a,b;
    cout<<"enter 2 numbers = ";
    cin>>a>>b;
    int c= lcm(a,b);
    cout<<"lcm is = "<<c;
}