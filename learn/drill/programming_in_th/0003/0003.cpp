#include <iostream>

using namespace std;

int main(void)
{
    int m = 0, n = 0, metrices = 2, round = metrices;

    cin >> m >> n;

    int buf = 0, res[m][n];

    for (int i = 0; round > 0; ++i)
    {
        if (i == m)
        {
            round--;
            i = 0;
            if (!round)
            {
                break;
            }
        }

        for (int j = 0; j < n; ++j)
        {
            cin >> buf;

            if (round == metrices)
            {
                res[i][j] = buf;
            }
            else
            {
                res[i][j] += buf;
            }
        }
    }

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}