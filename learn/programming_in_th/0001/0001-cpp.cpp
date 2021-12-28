#include <iostream>
using namespace std;

int main(void)
{
    unsigned short int a, b, c, sum;

    cin >> a >> b >> c;
    if ( a < 0 || a > 30 || b < 0 || b > 30 || c < 0 || c > 40 )
        return 1;
    
    sum = a + b + c;

    if (sum < 50)
        cout << "F";
    else if (sum > 79)
        cout << "A";
    else if (sum > 74)
        cout << "B+";
    else if (sum > 69)
        cout << "B";
    else if (sum > 64)
        cout << "C+";
    else if (sum > 59)
        cout << "C";
    else if (sum > 54)
        cout << "D+";
    else
        cout << "D";
    cout << endl;

    return 0;
}