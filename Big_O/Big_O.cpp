#include <iostream>

using namespace std;

void printItem(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << i << j << k << endl;
            }
        }
    }
}

int main()
{

    printItem(10);

    return 0;
}