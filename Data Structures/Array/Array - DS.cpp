#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int a[n];

    int i = n - 1;

    while(i < n && i >= 0)
    {
        cin >> a[i];

        i--;
    }

    for(i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
