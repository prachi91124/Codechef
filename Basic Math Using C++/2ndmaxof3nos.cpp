#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;

    while (n--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        if ((x > y && x < z) || (x < y && x > z))
        {
            cout << x << endl;
        }
        else if ((y > x && y < z) || (y < x && y > z))
        {
            cout << y << endl;
        }
        else
        {
            cout << z << endl;
        }
    }
}
