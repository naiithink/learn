#include <iostream>

using namespace std;

// typename could be a `class` as well
template <typename T>
T findMax(T x, T y)
{
    return (x > y) ? x
                   : y;
}

int main(void)
{
    cout << findMax <int> (1, 9) << endl;
    cout << findMax <char> ('a', 'z') << endl;

    return 0;
}