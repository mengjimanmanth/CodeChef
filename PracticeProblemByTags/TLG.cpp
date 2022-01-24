#include <iostream>
using namespace std;
int main()
{
    int T, dif = 0, led = 0, fp1 = 0, fp2 = 0, win;

    cin >> T;

    while (T--)
    {
        int p1, p2;
        cin >> p1 >> p2;
        fp1 += p1;
        fp2 += p2;

        if (fp1 > fp2)
        {
            dif = fp1 - fp2;
            if (dif > led)
            {
                led = dif;
                win = 1;
            }
        }
        else
        {
            dif = fp2 - fp1;
            if (dif > led)
            {
                led = dif;
                win = 2;
            }
        }
    }

    cout << win << " " << led;
    return 0;
}