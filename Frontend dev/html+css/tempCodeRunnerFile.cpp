#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int T;
cin>>T;
while(T--)
{
int N;
cin>>N;
int Arr[N];
for (int i = 0; i < N; i++)
{
    cin>>Arr[i];
}
cout<<pow(2,N)-N;

}
}