#include <iostream>
using namespace std;

int main(void)
{
    int num = 0;

    cin >> num;

    int pris[num];
    int nums[num];

    for (int i = 0; i < num; i++)
    {
        nums[i] = i + 1;
        cin >> pris[i];
    }

    for (int i = 0; i < num; i++)
    {
        cout << pris[i];
    }

    // cout << num;

    return 0;
}