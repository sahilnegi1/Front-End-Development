#include<iostream>
using namespace std;
int main()
{int a,b=0;
cout<<"enter a number =";
cin>>a;
int c=a;
while(a>0)
{
    int rem=a%10;
    a=a/10;
    b=b*10+rem;
}
cout<<b;
cout<<endl;
(c==b)?cout<<"it is a palindrome":cout<<"it is not a palindrome";
return 0;}