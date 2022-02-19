#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int pris[5] = { 5, 3, 4, 2, 1};

    sort(pris, pris + 5);


    pris[0] = 100;

    for (int i = 0; i < 5; i++)
        cout << pris[i] << endl;
}