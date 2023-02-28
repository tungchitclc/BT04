#include <iostream>

using namespace std;

int sumary( int n , int a[])
{
    int res = 0 ;
    for( int i = 0 ; i < n ; i++)
    {
        res += a[i];

    }
    return res;
}

int main()
{
    int n ;
    cin >> n ;
    int a[n];
    int b[n + 1];
    for( int i = 0 ; i < n ; i++)
        cin >> a[i];
    for( int i = 0 ; i < n + 1 ; i++)
        cin >> b[i];
    cout << sumary(n + 1,b)- sumary( n , a);
    return 0;
}
