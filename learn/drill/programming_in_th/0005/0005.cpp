#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(void)
{
    float o = 0.0, a = 0.0, h = 0.0;

    cin >> o >> a;

    h = sqrt(pow(o, 2.0) + pow(a, 2.0));

    cout << fixed << setprecision(6) << h << endl;

    return 0;
}