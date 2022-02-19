#include <iostream>
#include <algorithm>
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

    // for ()

    sort(pris, pris + num);

    for (int i = 0; i < num; i++)
    {
        cout << pris[i] << endl;
    }

    // cout << num;

    return 0;
}