#include<iostream>
using namespace std;
int fibonacci(int n)
{
if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
 else{
        return fibonacci(n-2) + fibonacci(n-1);
    }
// return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{int a;
cout<<"enter a number = ";
cin>>a;
for (int i = 0; i < a; i++)
{
cout<<fibonacci(i)<<",";
    /* code */
}


return 0;}

