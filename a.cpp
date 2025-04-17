#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int pd = 1, rem = 0;
    cin >> n;
    while (n > 0)
    {
        rem = n % 10;
        pd = pd * rem;
        n = n / 10;
    }
    cout << pd << endl;
}