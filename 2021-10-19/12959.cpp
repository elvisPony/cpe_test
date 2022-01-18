#include <iostream>
using namespace std;

int main()
{
    int numPlay, rounds;
    while (cin >> numPlay >> rounds)
    {
        if (numPlay == 0 && rounds == 0)
            return 0;

        int playPoint[501] = {};
        int winner = 1;
        int tempPoint;
        for (int r = 1; r <= rounds; ++r)
        {
            for (int p = 1; p <= numPlay; ++p)
            {
                cin >> tempPoint;
                playPoint[p] += tempPoint;
                if (playPoint[winner] <= playPoint[p])
                    winner = p;
            }
        }
        cout << winner << endl;
    }
}