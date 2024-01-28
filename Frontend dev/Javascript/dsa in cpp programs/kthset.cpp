#include<iostream>
using namespace std;
int kset(int a,int k)
{
int x=(1<<(k-1));
if(a&x!=0)
{cout<<"yes";}
else
cout<<"no";
}