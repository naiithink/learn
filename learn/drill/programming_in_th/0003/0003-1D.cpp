#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int m = 0, n = 0, metrices = 2, round = metrices;

    cin >> m >> n;

    int len = m * n;
    int buf = 0, res[len];

    for (int i = 0, idx = 0; round > 0; ++i)
    {
        if (i == m)
        {
            round--;
            i = 0;
            idx = 0;
        }

        for (int j = 0; j < n; ++j)
        {
            cin >> buf;
            if (round == metrices)
            {
                res[idx++] = buf;
            }
            else
            {
                res[idx++] += buf;
            }
        }
    }

    for (int i = 0, idx = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << res[idx++] << " ";
        }
        cout << endl;
    }

    return 0;
}