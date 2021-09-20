#include <bits/stdc++.h>
#define sync
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sync

    int a,b;
    cin >> a >> b;
    if (a > b)
        cout << a - b;
    else
        cout << b - a << endl;

    return 0;
}