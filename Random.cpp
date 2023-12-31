#include <bits/stdc++.h>
using namespace std;
int fib(int n);
void solve();
int main()
{
    solve();
}

void solve()
{
    int n;
    cin >> n;
    cout << fib(n);
}

int fib(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return fib(n-1) +fib(n-2);
}