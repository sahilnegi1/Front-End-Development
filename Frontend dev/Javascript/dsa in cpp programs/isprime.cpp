#include <iostream>
#include <vector>
using namespace std;
int seive(int a)
{
    vector<bool> isprime(a + 1, true);
    for (int i = 2; i <= a; i++)
    {
        if(isprime[i])
        {
            cout << i<<" ";
            for (int j = i*i; j <= a; j+=i)
            {
                isprime[j]=false;
            }
            
        }
    }
}
int main()
{
    int a;
    cout << "enter a number  = ";
    cin >> a;
    seive(a);
    return 0;
}