#include <iostream>
using namespace std;

int main(void)
{
    unsigned short int n, fi = 0;
    int A, m, M;

    cin >> n;
    if ( n <= 0 || n > 1000 )
        return 1;

    while (n)
    {
        cin >> A;

        if (!fi)
        {
            m = A;
            M = A;
            fi++;
        }

        if (A < m)
            m = A;
        else if (A > M)
            M = A;

        n--;
    }

    cout << m << endl << M << endl;

    return 0;
}