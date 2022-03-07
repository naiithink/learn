#include <iostream>

using namespace std;

int main(void)
{
    string s;
    int cases[] = { 0, 0 };

    cin >> s;

    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] <= 90)
        {
            cases[0] = 1;
        }
        else
        {
            cases[1] = 1;
        }
    }

    if (cases[0] && cases[1])
    {
        cout << "Mix" << endl;
    }
    else if (cases[0])
    {
        cout << "All Capital Letter" << endl;
    }
    else
    {
        cout << "All Small Letter" << endl;
    }

    return 0;
}