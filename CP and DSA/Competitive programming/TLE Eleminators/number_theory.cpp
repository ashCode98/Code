#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i < num - 1; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    if (isPrime(n) == true)
    {
        cout << "n is a prime number" << endl;
    }
    else
    {
        cout << "not a prime" << '\n';
    }
}