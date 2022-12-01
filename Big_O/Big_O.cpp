#include <iostream>

using namespace std;

// this for O(2^n)
void printItem_1(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i << j << endl;
        }
    }
}

void printItem_2(int n)
{

    for (int i = 0; i < n; i++)
    {

        cout << i << endl;
    }
}

void printItem_3(int n)
{

    cout << n << endl;
}

int main()
{

    printItem_1(10); // this for O(n^2)

    printItem_2(10); // this for O(2^n)

    printItem_2(30); // this is O(1)

        return 0;
}