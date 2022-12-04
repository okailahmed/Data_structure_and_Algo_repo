#include <iostream>

using namespace std;

int main()
{
    int n, m, k, comp = 0, i, index;
    cout << "please enter the n and m and k ";
    cin >> n >> m >> k;
    index = n;
    cout << endl;
    if (n == 0)
    {
        cout << comp;
    }
    else
    {
        while (n > 0)
        {
            if (n == 1)
            {
                if ((m > 0) && (k > 0))
                {
                    comp++;
                    --m;
                    --k;
                    --n;
                }
            }
            else
            {
                if((n > 2) && (m > 0) && (k > 0))
                {
                    comp++;
                    --m;
                    --k;
                    --n;
                }
                else if ((n >= 2)  && (k > 0))
                {
                    comp++;
                    --m;
                    --k;
                    n = n - 2;
                }
                
            }
        }
    }

    cout << "combination = " << comp;
}