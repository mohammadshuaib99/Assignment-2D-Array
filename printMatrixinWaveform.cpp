#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int array[n][n];
    cout << "Input Matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }

    cout << "Printing The Matrix : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Printing Wave form" << endl;
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << array[i][j] << " ";
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << array[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

/*Enter the size of array : 3
Input Matrix :
1 2 3
4 5 6
7 8 9
Printing The Matrix :
1 2 3
4 5 6
7 8 9
Printing Wave form
7 4 1
2 5 8
9 6 3*/