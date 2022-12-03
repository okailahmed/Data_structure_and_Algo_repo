#include <iostream>


using namespace std;



int main()
{

    int r,c,i,j;
    int there_is_s=0,cake_count=0,max_cake;


    cout<<"please enter rows colums ";
    cin>> r >> c;
    char input,m[r][c];


    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"enter action";
            cin>>input;
            m[i][j] = input;
        }
    }


    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<m[i][j];
            cout<<" ";  
        }
        cout<<endl;
    }


    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(m[i][j] == 's')
            {
                there_is_s = 1;
                break;
            }else
            {
                cake_count++;
            }
        }

        if(there_is_s == 1)
        {
            there_is_s = 0;
            cake_count = 0;
        }else
        {
            max_cake = max_cake + cake_count;
            cake_count = 0;

            for(j=0;j<c;j++)
            {
                m[i][j] = 'x';
            }
        }
    }


    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            if(m[j][i] == '.')
            {
                cake_count++;
            }else if(m[j][i] == 's')
            {
                there_is_s = 1;
                break;
            }
        }

        if(there_is_s == 1)
        {
            there_is_s = 0;
            cake_count = 0;
        }else
        {
            max_cake += cake_count;
            cake_count =0;
        }
    }


    cout<< max_cake ;



    return 0;
}



// using namespace std;

// // this for O(2^n)
// void printItem_1(int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << i << j << endl;
//         }
//     }
// }

// void printItem_2(int n)
// {

//     for (int i = 0; i < n; i++)
//     {

//         cout << i << endl;
//     }
// }

// void printItem_3(int n)
// {

//     cout << n << endl;
// }

// int main()
// {

//     printItem_1(10); // this for O(n^2)

//     printItem_2(10); // this for O(2^n)

//     printItem_2(30); // this is O(1)

//         return 0;
// }