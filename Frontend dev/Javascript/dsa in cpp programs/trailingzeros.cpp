#include<iostream>
using namespace std;
int trailingzeros(int n)
{int result=0;
while(n%10==0)
{
    result++;
    n=n/10;
}
return result;
}
int main()
{int a,res=1;
cout<<"enter a number = ";
cin>>a;
for (int i = 1; i <=a; i++)
{
    res=res*i;
}
cout<<res;
int ans = trailingzeros(res);
cout<<endl;
cout<<ans;
return 0;
}