#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int K[10] = { 0 };
    double Y[10] = { 0 };
    int days = 365;
    int day = days;
    unsigned long perm = 1;
    long double y = 0;

    for (int i = 0; i < 10; i++)
        K[i] = i + 1;

    for (int i = 0, k = 0; i < 10; i++, day = days, y = 0)
    {
        k = K[i];
        while (day > (days - k + 1))
        {
            perm *= day--;
        }
        y = (long double)(1) - ((long double)(perm) / pow(days, (double)k));
        Y[i] = y;
    }

    cout << perm << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << K[i] << " " << Y[i] << endl;
    }

    return 0;
}